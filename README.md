<a href="https://github.com/hpsaturn/atmega_promicro16/blob/master/pinout_diagram.jpg" target="_blank"><img src="https://raw.githubusercontent.com/hpsaturn/atmega_promicro16/master/pinout_diagram.jpg" align="right" width="340" ></a>

# Atmega32u4 board tests 

Tests on a Pro micro 16Mhz 5V like these [Sparkfun/Aliexpress boards](https://www.aliexpress.com/item/32888212119.html)

## Platformio Config

Current config is:

```python
[env:sparkfun_promicro16]
platform = atmelavr
board = sparkfun_promicro16
framework = arduino
``` 

## Compiling and installing

```bash
pio run --target upload
``` 

## Blink TX/RX test

Using two builtin leds, TX/RX test

```C++
#include <Arduino.h>

void setup()
{
  // initialize LEDs digital pin as an output.
  pinMode(LED_BUILTIN_TX, OUTPUT);
  pinMode(LED_BUILTIN_RX, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN_TX, HIGH);
  digitalWrite(LED_BUILTIN_RX, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN_TX, LOW);
  digitalWrite(LED_BUILTIN_RX, HIGH);
  delay(100);
}
``` 
