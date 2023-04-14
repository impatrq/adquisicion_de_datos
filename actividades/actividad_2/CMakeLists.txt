# Set CMake minimum version
cmake_minimum_required(VERSION 3.13)

# Pull in SDK (must be before project)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Set project name
project(main C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Set library root directory
set(PICO_LIBS libs)

# SDK version error message
if (PICO_SDK_VERSION_STRING VERSION_LESS "1.3.0")
    message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.3.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

# Initialize Pico SDK
pico_sdk_init()

# Add libraries
add_library(libs 
    ${PICO_LIBS}/bmp280.c
    ${PICO_LIBS}/lcd_i2c.c
)

# Include header files to library
target_include_directories(libs PUBLIC 
    ${PICO_LIBS}/inc
)

# Link libraries with SDK
target_link_libraries(libs pico_stdlib hardware_i2c)

# File to output
add_executable(${PROJECT_NAME}
    main.c
)

# Enable/disable stdio output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

# Include header files to library
target_include_directories(${PROJECT_NAME} PUBLIC 
    ${PICO_LIBS}/inc
)

# Link libraries with main project
target_link_libraries(${PROJECT_NAME} 
    pico_stdlib
    libs
)
pico_add_extra_outputs(${PROJECT_NAME})
