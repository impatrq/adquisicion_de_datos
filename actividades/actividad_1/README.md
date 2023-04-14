# 1. ACTIVIDAD 1 - “MUESTREO DE TEMPERATURA”

## 1.1 OBJETIVOS

Entender el funcionamiento de un ADC y para lograr un muestreo de temperatura. Hacer uso de una interfaz gráfica como un display 7 segmentos para mostrar el valor medido.

## 1.2 REALIZACIÓN DE LA ACTIVIDAD

Se encuentra una simulación ya armada en Wokwi, un simulador online para algunos microcontroladores. El proyecto en cuestión puede encontrarse [aquí](https://wokwi.com/projects/358509140639702017). Consiste en
un muestreo periodico de temperatura con un NTC. Las tareas a realizar son: 

1. En la función main hay que agregar:
    - La inicialización del ADC (línea 98).
    - Habilitar el GPIO correspondiente como entrada analógica para el NTC (linea 100).
    - Seleccionar el canal analógico correspondiente (línea 102).
    - Hacer una lectura con el ADC y guardar el valor en la variable _adc_value_ (linea 109).
    - Calcular y guardar la temperatura leída del NTC en la variable temperatura (línea 111).
<br></br>
2. La función _display_temp_ toma un valor de temperatura, obtiene cada uno de los cuatro dígitos (decena, unidad, primer y segundo decimal) y los muestra en cada dígito del display individualmente. La función debe:

    - Obtener la decena y guardarla en la variable _digit_1_ (línea 56).
    - Obtener la unidad y guardarla en la variable _digit_2_ (línea 64).
    - Obtener el primer decimal y guardarlo en la variable _digit_3_ (línea 72).
<br></br>
3. Descargar el _firmware.uf2_ e implementarlo en un circuito real.

4. Aumentar _SLEEP_MS_ a 200, volver a descargar _firmware.uf2_ y ver la diferencia.

## 1.3 ENTREGA DE LA ACTIVIDAD

La entrega de la actividad se hace en un repositorio individual de GitHub que se deberá entregar en la tarea correspondiente en Classroom donde será calificada. La actividad tiene un parcialito asociado que se debe completar y aprobar.