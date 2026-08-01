include <Servo.h>

Servo myServo;

// HC-SR04 Pins
const int trigPin = 7;
const int echoPin = 6;

// Optional LED
const int ledPin = 3;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledPin, OUTPUT);

  myServo.attach(9);

  myServo.write(0);

  Serial.begin(9600);
}

void loop() {

  // إرسال نبضة
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 10) {

    myServo.write(100);
    digitalWrite(ledPin, HIGH);

  }

  else {

    myServo.write(0);
    digitalWrite(ledPin, LOW);

  }

  delay(100);
}
