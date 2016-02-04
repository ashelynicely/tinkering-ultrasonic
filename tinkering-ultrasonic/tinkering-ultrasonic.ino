#include "NewPing.h"

#define ULTRASONIC_TRIGGER_PIN  2
#define ULTRASONIC_ECHO_PIN     3
#define ULTRASONIC_MAX_DISTANCE 400

NewPing sonar(ULTRASONIC_TRIGGER_PIN, ULTRASONIC_ECHO_PIN, ULTRASONIC_MAX_DISTANCE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned int distance = sonar.ping();
  Serial.print(distance);
  delay(500);

}
