#include <stdio.h>
#include "pico/stdlib.h"

/* Elijo un pin de Trigger y Echo */
const uint TRIGGER = 27;
const uint ECHO = 26;

int main() {
    /* Habilito el USB */
    stdio_init_all();
    sleep_ms(1000);
    printf("Listo!\r\n");
    /* Habilito el pin de Trigger */
    gpio_init(TRIGGER);  
    /* Configuro el Trigger como salida */
    gpio_set_dir(TRIGGER, true);
    /* Pongo un 0 en el pin de Trigger */
    gpio_put(TRIGGER, false);
    /* Habilito el pin de Echo */
    gpio_init(ECHO);
    /* Configuro el Echo como entrada */
    gpio_set_dir(ECHO, false);

    while (true) {
        /* Escribo un 1 en el Trigger */
        gpio_put(TRIGGER, true);
        /* Espero 10 us con el pulso encendido */
        sleep_us(10);
        /* Escribo un 0 en el Trigger */
        gpio_put(TRIGGER, false);
        /* Espero a que el pulso llegue al Echo */
        while(!gpio_get(ECHO));
        /* Mido el tiempo de cuando llega el pulso */
        absolute_time_t from = get_absolute_time();
        /* Espero a que el pulso del Echo baje a cero */
        while(gpio_get(ECHO));
        /* Mido el tiempo cuando termina el pulso */
        absolute_time_t to = get_absolute_time();
        /* Saco la diferencia de tiempo (el ancho del pulso) en us */
        int64_t pulse_width = absolute_time_diff_us(from, to);
        /* Calculo la distancia */
        float distance = pulse_width / 59.0;
        /* Muestro por consola */
        printf("Distance: %.2f cm\r\n", distance);
        /* Espero medio segundo */
        sleep_ms(500);
    }
}
