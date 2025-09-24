# Arduino Watchdog-Timer para Meshtastic

Este proyecto permite a un microcontrolador Arduino realizar un **reset en el pin de reset** y luego entrar en un **modo de bajo consumo** durante un tiempo determinado. 
Es útil para aplicaciones donde se necesita reiniciar un dispositivo conectado periódicamente y reducir el consumo de energía mientras está inactivo.

## Funcionalidades

- Reset del pin GPIO2 durante 2 segundos.
- Entrada en modo de bajo consumo por un período configurable.
- Configuración del tiempo de sueño en **horas** y **minutos**.
- Serial monitor para ver las acciones realizadas: reset y tiempo de sueño.

## Hardware requerido

- Arduino (UNO, Nano, etc.)
- Dispositivo conectado al pin GPIO2
- Cable USB para programación y monitorización por Serial

## Librerías necesarias

- [`LowPower`](https://github.com/rocketscream/Low-Power) de RocketScream

Se puede instalar desde el **Library Manager** de Arduino IDE.


## Configuración

En el código, se puede configurar el tiempo de sueño modificando las variables:

```cpp
int h = 4; // horas
int m = 0; // minutos
```

## Uso

- Conecta tu Arduino al ordenador.
- Sube el código.
- Abre el Serial Monitor a 9600 baudios para ver la información.

Cada ciclo realizará:

- Reset de GPIO2 durante 2 segundos.
- Entrada en modo bajo consumo durante el tiempo configurado.
- Despertar y repetir el proceso.

## Ejemplo de salida Serial

```bash
Reset 2s on GPIO2 
Sleep for 14400s 
Wake up after 14400s
```



## Licencia

Este proyecto está bajo la licencia MIT.

