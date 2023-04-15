/*
 * Copyright (c) 2021 Valentin Milea <valentin.milea@gmail.com>
 *
 * SPDX-License-Identifier: MIT
 */

#include <dht.h>
#include <pico/stdlib.h>
#include <stdio.h>

// DHT usado (cambiar por DHT22 si fuese el caso)
static const dht_model_t DHT_MODEL = DHT11;
// GPIO a usar para los datos
static const uint DATA_PIN = 16;

/*
 * @brief Funcion que convierte de Celsius a Fahrenheit
 * @param celsius: temperatura en grados Celsius
 * @return temperatura en grados Fahrenheit
 */
static inline float celsius_to_fahrenheit(float celsius) {
    // Retornar el valor de la temperatura en Fahrenheit

}

/*
 * @brief Programa principal
 */
int main() {
    // Inicializacion de USB
    stdio_init_all();
    // Instancia de DHT
    dht_t dht;
    // Inicializacion de DHT usando el PIO0 para controlar el DATA_PIN
    dht_init(&dht, DHT_MODEL, pio0, DATA_PIN, true /* pull_up */);
    
    while(1) {
        // Inicio comunicacion con sensor
        dht_start_measurement(&dht);
        // Variables de humedad y temperatura
        float humidity, temperature_c;
        // Esperar a que la comunicacion termine y obtener los datos
        dht_result_t result = dht_finish_measurement_blocking(&dht, &humidity, &temperature_c);
        // Verificar el resultado de la operacion
        if (result == DHT_RESULT_OK) {
            // Mostrar temperatura y humedad

        } else if (result == DHT_RESULT_TIMEOUT) {
            // Mensaje de error
            puts("El DHT no responde, probablemente este mal el conexionado");
        } else {
            // Error de checksum
            puts("Mal checksum");
        }
        // Demora para no saturar la consola
        sleep_ms(500);
    }
}
