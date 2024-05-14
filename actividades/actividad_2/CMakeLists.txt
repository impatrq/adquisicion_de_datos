# Version minima de CMake
cmake_minimum_required(VERSION 3.13)
# Traigo SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Nombre del proyecto
project(main C CXX ASM)
# Estandares de C y C++
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Directorio para bibliotecas
set(PICO_LIBS libs)

# Version de SDK necesaria
if (PICO_SDK_VERSION_STRING VERSION_LESS "1.3.0")
    message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.3.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

# Inicializo el SDK
pico_sdk_init()

# Biblioteca para el LCD

# Agrego codigo fuente
add_library(lcd_i2c
    ${PICO_LIBS}/lcd_i2c/lcd.c
)

# Headers para las bibliotecas
target_include_directories(lcd_i2c PUBLIC 
    ${PICO_LIBS}/lcd_i2c
)

# Dependencias
target_link_libraries(lcd_i2c pico_stdlib hardware_i2c)

# Biblioteca para el BMP280

# Agrego codigo fuente
add_library(bmp280
    ${PICO_LIBS}/bmp280/bmp280.c
)

# Headers para las bibliotecas
target_include_directories(bmp280 PUBLIC 
    ${PICO_LIBS}/bmp280
)

# Dependencias
target_link_libraries(bmp280 pico_stdlib hardware_i2c)

# Archivo principal
add_executable(${PROJECT_NAME}
    main.c
)

# Habilito USB y deshabilito UART
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

# Dependencias del proyecto con las bibliotecas
target_link_libraries(${PROJECT_NAME} 
    pico_stdlib
    lcd_i2c
    bmp280
)

pico_add_extra_outputs(${PROJECT_NAME})
