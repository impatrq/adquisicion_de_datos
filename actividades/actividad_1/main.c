// Inclusion de bibliotecas
#include <stdio.h>
#include <math.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "hardware/i2c.h"
#include "lcd_i2c.h"

/*
 * @brief Programa principal
 */ 
int main() {
    // Variable para almacenar el resultado del ADC
    uint16_t adc_value = 0;
    // Variable para guardar el valor de temperatura
    float temperatura = 0.0;
    // Constante de proporcionalidad del termistor
    const uint16_t beta = 3950;
    // Habilito USB
    stdio_init_all();
    // Configuro el I2C0 a 100 KHz de clock
    i2c_init(i2c0, 100 * 1000);
    // Elijo GPIO4 como linea de SDA
    gpio_set_function(4, GPIO_FUNC_I2C);
    // Elijo GPIO5 como linea de SCL
    gpio_set_function(5, GPIO_FUNC_I2C);
    // Activo pull-up en ambos GPIO, son debiles por lo que
    // es recomendable usar pull-ups externas
    gpio_pull_up(4);
    gpio_pull_up(5);
    // Inicializacion del LCD
    lcd_init();
    // Inicializo ADC

    // Inicializo GPIO26 como entrada analogica

    // Selecciono canal analogico

    while(true) {
        // Leer NTC
        
        // Calculo temperatura
        
        // Limpio LCD
        lcd_clear();
        // Variable para el string
        char str[16];
        // Creo string
        
        // Imprimo string en segunda fila
        lcd_string(str);
        // Espero 500 ms
        sleep_ms(500);
    }
    return 0;
}