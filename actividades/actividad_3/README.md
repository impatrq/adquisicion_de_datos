# Actividad 3 - "Muestreo de humedad y temperatura"

## 3.1 OBJETIVOS

Hacer uso del protocolo de comunicacion One Wire para leer datos de humedad y temperatura desde un DHT11. Estudiar los beneficios de usar un PIO para este tipo de actividades.

## 3.2 REALIZACIÓN DE LA ACTIVIDAD

Esta actividad no es posible de implementar en un simulador como Wokwi. Todo lo necesario para empezar a resolver el problema y compilar el codigo se encuentra en este directorio. La actividad consiste en un muestreo periodico de humedad y temperatura con un DHT11. Las tareas a realizar son:

1- Completar la funcion _celsius_to_fahrenheit()_ con la operacion necesaria para pasar de grados Celsius a Fahrenheit.

2- En la linea 47, agregar una linea que muestre por consola los datos de humedad y temperatura con este formato:

```
La humedad es de XX.X% y la temperatura de XX.XX C o XX.XX F
```

3- Compilar el programa, implementar el circuito y conectar la computadora por el USB mediante un programa de comunicacion serial (Teraterm o minicom)

4- Quitar el `static inline` de la funcion _celsius_to_fahrenheit()_ y verificar el resultado

5- Mover la funcion _celsius_to_fahrenheit()_ luego del _main()_ y verificar el resultado

6- Habiendo aplicado los items 4 y 5, agregar un prototipo de funcion arriba del _main()_ y verificar el resultado. El prototipo es de esta forma:

```c
float celsius_to_fahrenheit(float celsius);
```

## 3.3 ENTREGA DE LA ACTIVIDAD

La entrega de la actividad se hace en un repositorio individual de GitHub con el código que se deberá entregar en la tarea correspondiente en Classroom donde será calificada. La actividad tiene un parcialito asociado que se debe completar y aprobar.

## 3.4 RECONOCIMIENTOS

La biblioteca para hacer uso del DHT11/DHT22 con el PIO de la Raspberry Pi Pico se encuentra en [este](https://github.com/vmilea/pico_dht) repositorio de GitHub, desarrollada por el usuario **vmilea**.
