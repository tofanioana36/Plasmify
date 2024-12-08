const int relaypumpPin = 11; // Pin connected to the pump
const int relaysolenoidPin2 = 5; // Pin connected to the first solenoid
const int relayPin = 7; // Pin connected to the spark generator
const int relaydiffuser=12; // Pin connected to the diffuser

// Variables
void setup() {
// Start serial communication
Serial.begin(9600);
// Pin modes
pinMode(relaypumpPin, OUTPUT);
pinMode(relaysolenoidPin2, OUTPUT);
pinMode(relaydiffuser, OUTPUT);
pinMode(relayPin, OUTPUT);
}
void loop() {
  
digitalWrite(relaysolenoidPin2, LOW); // Ensure the second solenoid is off
digitalWrite(relaydiffuser, LOW); // Ensure the diffuser is off
digitalWrite(relaypumpPin, HIGH); // Turn off the pump
digitalWrite(relayPin, HIGH); // Turn on the spark generator
delay(1000);
digitalWrite(relaypumpPin, LOW); // Turn off the pump
digitalWrite(relaydiffuser, LOW); // Ensure the diffuser is off
digitalWrite(relaysolenoidPin2, LOW); // Ensure the second solenoid is off
digitalWrite(relayPin, LOW); // Turn on the spark generator
delay(500); // Keep the spark generator on for 3 seconds
digitalWrite(relaypumpPin, LOW); // Turn off the pump
digitalWrite(relaydiffuser, LOW); // Ensure the diffuser is off
digitalWrite(relayPin, HIGH); // Turn off the spark generator
digitalWrite(relaysolenoidPin2, HIGH); // Turn on the second solenoid
delay(1300);
digitalWrite(relaydiffuser, HIGH); // Turn on the diffuser
digitalWrite(relaysolenoidPin2, LOW); // Ensure the second solenoid is off
digitalWrite(relaypumpPin, LOW); // Turn off the pump
digitalWrite(relayPin, HIGH); // Turn on the spark generator
}
