/**
 * Ultrassonico 5v
 */

#include <Arduino.h>
#include <Ultrasonic.h>

// Pino de saída
int pinTrig = 13;
// Pino de entrada
int pinEcho = 12;

Ultrasonic sensorUltrasonico (pinTrig, pinEcho);

long distancia;

void setup() {
    Serial.begin (9600);  
}

void loop() {
    distancia = sensorUltrasonico.read (CM);
    Serial.print (distancia);
    Serial.println (" cm");
    delay (100);
}