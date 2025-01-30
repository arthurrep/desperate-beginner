/* pwm_plotter
   Laat pwm-signaal zien op plotter.
   Verbind pin 3 met A3.
   Voor RC 4,7k en 22 uF naar A7
   Gebruik Arduino 1.8 IDE
*/

void setup() {
  Serial.begin(230400);
  pinMode(3, OUTPUT);
  analogWrite(3, 75);
}

void loop() {
  unsigned long tijd = millis();
  do {
    //Serial.println(analogRead(A3));
    Serial.println(analogRead(A7)); // met RC-netwerkje
  } while (millis() <= tijd + 10);
  while (1);
}
