#include <Arduino.h>
int touchPin = 5;
int ledPin = 13;
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author RIYA RAGHAV
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store touch state

void setup() {
    pinMode(touchPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
