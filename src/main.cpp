#include <Arduino.h>

void setup() {
    pinMode(1, OUTPUT);
}
// TO DO: allow non-integer delays, so any frequency is possible.
// Also extend frequency range to the Khz.
void loop() {
    int reading = analogRead(3);
    int frequency = reading/2;
    frequency = constrain(frequency, 1,512);
    int delaytime = 500/frequency;
    digitalWrite(1, HIGH);
    delay(delaytime);
    digitalWrite(1, LOW);
    delay(delaytime);
}