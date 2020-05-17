add_library(usercode "")    #add library

target_sources(usercode     #target source
PRIVATE
    Src/main.c
)

target_include_directories(usercode     #target include
PUBLIC
    Inc      
)

target_link_libraries(usercode      #target link to library
PRIVATE
    stm32std
)