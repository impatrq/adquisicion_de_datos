// Inclusion de bibliotecas
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "lcd.h"
#include "bmp280.h"

/*
 * @brief Programa principal
 */ 
int main() {
    // Habilito USB
    stdio_init_all();

    // Inicializacion de I2C

    // Inicializacion del LCD
    lcd_init(i2c0, 0x27);
    // Inicializo BMP280
    bmp280_init();

    // Obtengo parametros de compensacion
    struct bmp280_calib_param params;
    bmp280_get_calib_params(&params);

    // Variables para temperatura y presion
    int32_t raw_temperature;
    int32_t raw_pressure;
    // Variable para texto 
    char str[16];
    // Darle tiempo al BMP que se calibre
    sleep_ms(250);

    while(true) {
        // Leo temperatura y presion
        bmp280_read_raw(&raw_temperature, &raw_pressure);
        // Calculo temperatura y presion
        int32_t temperature = bmp280_convert_temp(raw_temperature, &params);
        int32_t pressure = bmp280_convert_pressure(raw_pressure, raw_temperature, &params);
        // Limpio LCD
        lcd_clear();
        // Armo string
        sprintf(str, "P=%.3f kPa", pressure / 1000.f);
        // Imprimo string en primer fila
        lcd_string(str);
        // Muevo a segunda fila
        lcd_set_cursor(1, 0);
        // Creo segundo string
        sprintf(str, "T=%.2f C", temperature / 100.f);
        // Imprimo string en segunda fila
        lcd_string(str);
        // Espero 500 ms
        sleep_ms(500);
    }
    return 0;
}