#ifndef _ULTRASONICO_H_
#define _ULTRASONICO_H_

#include <stdio.h>
#include "pico/stdlib.h"

/* Prototipos de funciones */
void ultrasonico_init(uint8_t trigger, uint8_t echo);
float ultrasonico_get_distance_cm(uint8_t trigger, uint8_t echo);

#endif /* _ULTRASONICO_H_ */