// automatically generated by arduino-cmake
#line 1 "C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_sensor.ino"
#include <Arduino.h>

// Globals
#line 7 "C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/cmake-build-debug/plantSensor_plant_sensor.ino.cpp"
#include "Arduino.h"

//=== START Forward: C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_activity.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_activity.ino

//=== START Forward: C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_sensor.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_sensor.ino
#line 2 "C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_sensor.ino"


String dataLabel1 = "EMG";
bool label = true;
int EMGPin = A1;
int EMGVal = 0;

void setup() {
    Serial.begin(115200);
    pinMode(EMGPin, INPUT);
}

void loop() {

    // runs once
    while(label) {
        Serial.print(dataLabel1);
        label=false;
    }

    EMGVal = analogRead(EMGPin);
    Serial.println(EMGVal);
    delay(50);
}
//=== START : C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_activity.ino
#line 1 "C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_activity.ino"
// put all three sensors on the plant and open the serialplotter

int EMGPin = A1;
int EMGVal = 0;

void setup() {
Serial.begin(115200);
}

void loop() {
EMGVal = analogRead(EMGPin);
Serial.println(EMGVal);
delay(50);
}

//=== END : C:/Users/fabia/Documents/MMT/term_4/prototyping/repo/sensorplant-arduino-plant/plant_activity.ino
