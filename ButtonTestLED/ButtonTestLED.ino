/* Test Button and LED
 *
 * LED Schematic: 
 *    IO2 -- R33[2K] ---- LED --- GND
 *
 * Button Schematic:
 *                          IO39
 *                           |
 *    VDD33 -- R1[10K] -- DPAD_UP ----- GND
 *
 *                          IO36
 *                           |
 *    VDD33 -- R2[10K] -- DPAD_CENTER -- GND
 *
 *                          IO15
 *                           |
 *    VDD33 -- R3[10K] -- DPAD_DOWN ---- GND
 *
 *                          IO14
 *                           |
 *    VDD33 -- R4[10K] -- DPAD_LEFT ---- GND
 *
 *                          IO13
 *                           |
 *    VDD33 -- R5[10K] -- DPAD_RIGHT --- GND
 */

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED_BUILTIN, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(DPAD_UP, INPUT);
  pinMode(DPAD_CENTER, INPUT);
  pinMode(DPAD_DOWN, INPUT);
  pinMode(DPAD_LEFT, INPUT);
  pinMode(DPAD_RIGHT, INPUT);
}

void led_blink()
{
  int button_n = 0;
  if(digitalRead(DPAD_UP) == LOW)
    button_n = 1;
  else if(digitalRead(DPAD_CENTER) == LOW)
    button_n = 2;
  else if(digitalRead(DPAD_DOWN) == LOW)
    button_n = 3;
  else if(digitalRead(DPAD_LEFT) == LOW)
    button_n = 4;
  else if(digitalRead(DPAD_RIGHT) == LOW)
    button_n = 5;

  for(;button_n --;)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void loop() {
  led_blink();
}
