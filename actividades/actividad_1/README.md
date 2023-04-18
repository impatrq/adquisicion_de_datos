# 1. ACTIVIDAD 1 - “MUESTREO DE TEMPERATURA”

## 1.1 OBJETIVOS

Entender el funcionamiento de un ADC y para lograr un muestreo de temperatura. Hacer uso de una interfaz gráfica como un display alfanumerico 16x2 para mostrar el valor medido.

## 1.2 REALIZACIÓN DE LA ACTIVIDAD

Esta actividad no es posible de implementar en un simulador como Wokwi. Todo lo necesario para empezar a resolver el problema y compilar el codigo se encuentra en este directorio. Consiste en un muestreo periodico de temperatura con un NTC. Las tareas a realizar son: 

1. En la función main hay que agregar:
    - La inicialización del ADC (línea 34).
    - Habilitar el GPIO correspondiente como entrada analógica para el NTC (linea 36).
    - Seleccionar el canal analógico correspondiente (línea 38).
    - Hacer una lectura con el ADC y guardar el valor en la variable _adc_value_ (linea 41).
    - Calcular y guardar la temperatura leída del NTC en la variable temperatura (línea 43).
    - Usando la funcion _sprintf_ (linea 49), armar un string en la variable _str_ para que se muestre la temperatura en el formato `Temp = XX.XX C`.
<br></br>
2. Compilar, descargar el _.uf2_ en la Raspberry Pi Pico e implementarlo en un circuito real.

Para calcular la temperatura a partir de la medicion del ADC puede usarse la formula:

```c
1 / (log(1 / (4095. / adc_value - 1)) / beta + 1.0 / 298.15) - 273.15;
```

## 1.3 ENTREGA DE LA ACTIVIDAD

La entrega de la actividad se hace en un repositorio individual de GitHub que se deberá entregar en la tarea correspondiente en Classroom donde será calificada. La actividad tiene un parcialito asociado que se debe completar y aprobar.