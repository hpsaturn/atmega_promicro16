/*
 * Blink
 * 
 * Texting board: https://www.aliexpress.com/item/32888212119.html
 */

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
