# Ultrasonico 

## Consigna

1- Armar un circuito con la Raspberry Pico y un sensor ultrasonico.

2- Crear una funcion llamada `ultrasonic_get_distance_cm` que se encargue de obtener la distancia en cm:

```c
float ultrasonic_get_distance_cm(uint8_t trigger, uint8_t echo) {

}
```

Donde `trigger` y `echo` son los pines conectados al ultrasonico.

3- Crear una funcion llamada `ultrasonic_init` que inicialice el sensor a partir del pin de `TRIGGER` y `ECHO`:

```c
void ultrasonic_init(uint8_t trigger, uint8_t echo) {

}
```

Donde `trigger` y `echo` son los pines conectados al ultrasonico.

4- En la funcion principal, debe hacerse una medicion de distancia con el sensor, y luego: 
- Si la distancia es menor a 10 cm, se debe prender un LED rojo.
- Si la distancia es mayor a 10 cm pero menor a 50 cm, se debe prender un LED amarillo.
- Si la distancia es mayor a 50 cm pero menor a 100 cm, se debe prender un LED rojo.

5- Hacer un `README.md` con el siguiente contenido:

```markdown
# Ultrasonico


Alumno: Nombre y apellido

Curso: Curso

Materia: Adquisicion de Datos
```

## Orientacion

- Raspberry Pi Pico board [datasheet](https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf).
- RP2040 [datasheet](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf)
- Raspberry Pico [SDK](https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf) para C/C++.
- Datos sobre el [ultrasonico](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf).

## Entrega

- Crear un repositorio con el nombre `add-04`.
- Subir el `README.md`, `main.c`, `CMakeLists.txt`.
