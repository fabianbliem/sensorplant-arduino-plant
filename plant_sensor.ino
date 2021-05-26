#include <Arduino.h>

// Globals
String dataLabel1 = "EMG";
bool label = true;
int EMGPin = A1;
int EMGVal = 0;
unsigned long clocktime;

void setup() {
    Serial.begin(115200);
    pinMode(EMGPin, INPUT);
}

void loop() {

    clocktime=millis();      // time in milli seconds

    EMGVal = analogRead(EMGPin);
    Serial.println(EMGVal);
    Serial.print(",");
    Serial.println(clocktime, 1);
    Serial.print("\n");

    delay(50);
}