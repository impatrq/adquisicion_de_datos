# 2. ACTIVIDAD 2 - “MUESTREO DE PRESIÓN”

## 2.1 OBJETIVOS

Hacer uso de la interfaz I2C para conectar diversos dispositivos esclavos y poder tomar datos de un sensor para mostrarlos en un display.

## 2.2 REALIZACIÓN DE LA ACTIVIDAD

Esta actividad no es posible de implementar en un simulador como Wokwi. Todo lo necesario para empezar a resolver el problema y compilar el codigo se encuentra en este directorio. La actividad consiste en un muestreo periodico de presión y temperatura con un BMP280. Las tareas a realizar son:

1. En la función main hay que agregar:
    - La inicialización del I2C0 (BMP280) e I2C1 (LCD) cada uno con la velocidad máxima posible.
    - Habilitar los GPIO elegidos como pines de SDA y SCL para cada periférico de I2C.
    - Habilitar los pull-up de esos GPIO.
<br></br>

2. Descargar el _firmware.uf2_ e implementarlo en un circuito real. Medir con un analizador lógico y sacar captura.

3. Luego, usar el mismo I2C0 para conectar ambos dispositivos y configurarlos a la velocidad apropiada.

    - Modificar en la línea 49 del archivo _lcd_i2c.h_ de _i2c1_ a _i2c0_.
    - Modificar en la inicialización del I2C del main la velocidad de transferencia a la apropiada.
    - Eliminar la inicialización del I2C1.
<br></br>

4. Descargar el _firmware.uf2_ e implementarlo en un circuito real. Medir con un analizador lógico y sacar captura.

5. Modificar la velocidad de transferencia a la más rápida del bus. Descargar el _firmware.uf2_ e implementarlo en un circuito real. Medir con un analizador lógico y sacar captura.

## 1.3 ENTREGA DE LA ACTIVIDAD

La entrega de la actividad se hace en un repositorio individual de GitHub con el código y las capturas del analizador lógico que se deberá entregar en la tarea correspondiente en Classroom donde será calificada. La actividad tiene un parcialito asociado que se debe completar y aprobar.