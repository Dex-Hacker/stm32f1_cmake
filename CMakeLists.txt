cmake_minimum_required(VERSION 3.14.0)  #minimum required version

project(test)   #project name
set(projectname test)   #set projectname variable

enable_language(ASM C)  #allow compiler language

add_subdirectory(Libraries)  #add subdirectory to find CMakeLists.txt
add_subdirectory(User)

add_executable(${projectname} "")   #executable name

target_sources(${projectname}   #target source
PRIVATE
    compiler/retarget.c
    compiler/startup.c  
    compiler/startup_ARMCM3.S
)

target_link_libraries(${projectname}    #target link to libraries
PUBLIC
    stm32std
    usercode
)

# add_custom_target(${projectname}.asm  #build asm
#     DEPENDS 
#     ${projectname}
#     COMMAND 
#         ${CMAKE_OBJDUMP} -d ${CMAKE_BINARY_DIR}/${projectname} > ${CMAKE_BINARY_DIR}/${projectname}.asm)

# add_custom_target(${projectname}_info  #build info
#     DEPENDS 
#     ${projectname}.asm
#     COMMAND 
#         ${CMAKE_SIZE} ${CMAKE_BINARY_DIR}/${projectname})

add_custom_target(${projectname}.bin    #build bin
    DEPENDS 
    ${projectname}
    COMMAND 
        ${CMAKE_OBJCOPY} -O binary ${CMAKE_BINARY_DIR}/${projectname} ${CMAKE_BINARY_DIR}/${projectname}.bin)

add_custom_target(${projectname}.hex    #build hex
    DEPENDS 
    ${projectname}
    COMMAND             
        ${CMAKE_OBJCOPY} -O ihex ${CMAKE_BINARY_DIR}/${projectname} ${CMAKE_BINARY_DIR}/${projectname}.hex)