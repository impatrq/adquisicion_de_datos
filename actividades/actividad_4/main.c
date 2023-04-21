#include <stdio.h>
#include "pico/stdlib.h"
#include "ultrasonico.h"

/*
 * @brief Programa principal
 */
int main(void) {
    // Inicializacion del USB
    stdio_init_all();
    // Elegir un GPIO para trigger, echo y buzzer

    // Inicializacion del ultrasonico
    ultrasonico_init(trig, echo);
    // Inicializo buzzer


    while(1) {
        // Hago una lectura de distancia
        float d = ultrasonico_get_distance_cm(trig, echo);
        // Muestro por consola

        // Verifico distancia

        // Espero
        sleep_ms(10);
    }
}