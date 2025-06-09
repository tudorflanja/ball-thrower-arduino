#include <Servo.h>

Servo myServo;  // Create a servo object to control a servo motor

int buttonPin = 2;  // Define the button pin
int buttonState = 0;  // Variable to store the button state

const int triggerPin = 3;  // Define the ultrasound sensor trigger pin
const int echoPin = 4;     // Define the ultrasound sensor echo pin

const int initialPosition = 0;  // Define the initial position of the servo
int buzzerPin = 8;  // Define the buzzer pin

const int ledRed = 5; //Define the Red led pin
const int ledGreen = 6; //define the Green led pin

void setup() {
  Serial.begin(9600);
  myServo.attach(7);  // Attach the servo to digital pin 7
  pinMode(buttonPin, INPUT);  // Set the button pin as input
  pinMode(triggerPin, OUTPUT);  // Set the ultrasound sensor trigger pin as output
  pinMode(echoPin, INPUT);  // Set the ultrasound sensor echo pin as input
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as output
  pinMode(ledRed, INPUT);  // Set the button pin as input
  pinMode(ledGreen, INPUT);  // Set the button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the state of the button
  Serial.println(buttonState);

  // Measure distance using the ultrasound sensor
  long duration;
  int distance;
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

   Serial.print("Distance: ");
   Serial.print(distance);
   Serial.println(" cm");

   if(distance >= 10){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);}
    else{
      digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    Serial.println("Distance is too short");}

  if (buttonState == HIGH && distance >= 10) {  // Check if the button is pressed and distance is greater than or equal to 10 cm
    myServo.write(90);  // Rotate the servo to 90 degrees immediately
    
    // Emit sound on the buzzer
    tone(buzzerPin, 1000);  // You can adjust the frequency (here, 1000 Hz)
    delay(500);  // Wait for 0.5 seconds (adjust as needed)
    noTone(buzzerPin);  // Stop the sound
    
    myServo.write(initialPosition);  // Return the servo to the initial position
  }
}
