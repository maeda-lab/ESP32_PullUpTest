/*
  Input Pull-up Test for ESP32

  This example demonstrates the use of gpio_set_pull_mode(GPIO_NUM_*, GPIO_*)). 
  It reads a digital input on pin 22.

  The circuit:
  - Oscilloscope is connected to pin 22 named by GPIO_NUM_22 as ESP32 oriented name

  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  45K-ohm resistor is pulled to 3.3V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

  created 4 Mar 2021
  by Masahiro Furukawa

  This example code is in the public domain.

  reference:
 //https://blog.goo.ne.jp/jh7ubc/e/cc27b64dd37726f33694d071c3b3a2d8

 Oscilloscope : DSP_Quad
 // https://wiki.seeedstudio.com/DSO_Quad/
 
*/
void setup() {
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(22, INPUT);

}

void loop() {
 
  gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLUP_ONLY);
  delay(1);

  gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLDOWN_ONLY);
  delay(1);

  gpio_set_pull_mode(GPIO_NUM_22, GPIO_PULLUP_PULLDOWN);
  delay(1);

  gpio_set_pull_mode(GPIO_NUM_22, GPIO_FLOATING);
  delay(1);
}
