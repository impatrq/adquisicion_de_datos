# Actividad 4 - "Medicion de distancia con ultrasonido"

## 3.1 OBJETIVOS

Hacer uso de un sensor ultrasonico para medir distancia de objetos.

## 3.2 REALIZACIÓN DE LA ACTIVIDAD

Esta actividad puede ser simulada en [Wokwi](https://wokwi.com/projects/362634394468476929). Para implementarlo con componentes reales, el codigo completo se encuentra en este repositorio. La actividad consiste en usar un sensor ultrasonico para medir distancia a objetos y avisar con un buzzer cuando la distancia sea poca. Las tareas a realizar son:

1- Elegir los GPIO para los pines de _trigger_, _echo_ para inicializar el ultrasonido.

2- Elegir el GPIO para el _buzzer_ e inicializarlo con las funciones de `gpio_init` y `gpio_set_dir`.

3- En el _while(1)_, verificar que la distancia no sea menor a 10 cm. Si lo es, encender el buzzer, sino, apagarlo. Usar la funcion `gpio_put`.

4- Imprimir por consola la distancia con un `printf` en el formato:

```
Distancia: xx.xx cm
```

5- Compilar el programa, implementar el circuito y conectar la computadora por el USB mediante un programa de comunicacion serial (Teraterm o minicom) para verificar la salida. Debido a que el buzzer maneja 5 V de tension, adaptar la tension de salida del GPIO con un transistor polarizado correctamente.

6- Observar la biblioteca del ultrasonido y comparar con lo especificado en la hoja de datos.

## 3.3 ENTREGA DE LA ACTIVIDAD

La entrega de la actividad se hace en un repositorio individual de GitHub con el código que se deberá entregar en la tarea correspondiente en Classroom donde será calificada. La actividad tiene un parcialito asociado que se debe completar y aprobar.
