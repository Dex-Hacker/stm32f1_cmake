set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)

# set toolchain compiler viriable eg:vi ~/.bashrc export ARMEABI_BASE=/home/x/Tools/gcc-arm-none-eabi-9-2019-q4-major
set(TOOLCHAIN_ROOT $ENV{ARMEABI_BASE}/bin)

set(CMAKE_SYSROOT  $ENV{ARMEABI_BASE}/arm-none-eabi)

# set(CMAKE_STAGING_PREFIX ${CMAKE_BINARY_DIR}/install)

set(CMAKE_C_COMPILER_FORCED true)
set(CMAKE_CXX_COMPILER_FORCED true)

set(CMAKE_C_COMPILER ${TOOLCHAIN_ROOT}/arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER ${TOOLCHAIN_ROOT}/arm-none-eabi-g++)

set(CMAKE_OBJCOPY ${TOOLCHAIN_ROOT}/arm-none-eabi-objcopy)
set(CMAKE_OBJDUMP ${TOOLCHAIN_ROOT}/arm-none-eabi-objdump)
set(CMAKE_SIZE ${TOOLCHAIN_ROOT}/arm-none-eabi-size)

# set(CMAKE_FIND_ROOT_PATH ${CMAKE_SYSROOT})
set(CMAKE_FIND_ROOT_PATH $ENV{ARMEABI_BASE}/arm-none-eabi)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

add_compile_options(
    --specs=nano.specs
    -mcpu=cortex-m3
    -O3
    -fdata-sections
    -ffunction-sections
)

add_link_options(
    --specs=nano.specs
    -mcpu=cortex-m3
    -T${CMAKE_SOURCE_DIR}/compiler/stm32f1xx.ld
    -fdata-sections
    -ffunction-sections
    -Wl,--gc-section
)

add_definitions(
    -DSTM32F10X_HD
    -DUSE_STDPERIPH_DRIVER
    -D__STACK_SIZE=1024
    # -D__HEAP_SIZE=1024
)