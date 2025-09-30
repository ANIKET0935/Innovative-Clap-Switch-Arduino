// Pin configuration
const int trigPin = 9;         // Trigger pin of ultrasonic sensor
const int echoPin = 10;        // Echo pin of ultrasonic sensor
const int micPin = 2;          // Microphone pin to detect claps
const int ledPin = 7;          // LED pin to control light

// Variables to keep track of distances and claps
long duration;
int distance;
bool lightState = false;
unsigned long lastClapTime = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(micPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Ensure the LED is initially off
  Serial.begin(9600);         // Initialize Serial Monitor for debugging
}

void loop() {
  // Check for claps
  if (digitalRead(micPin) == HIGH) {
    unsigned long currentClapTime = millis();
    if (currentClapTime - lastClapTime > 500) { // Simple debounce for claps
      lightState = !lightState;  // Toggle the light state
      digitalWrite(ledPin, lightState ? HIGH : LOW);
      lastClapTime = currentClapTime;
    }
  }

  // Ultrasonic sensor reading
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance
  distance = duration * 0.034 / 2;

  // Display the distance in Serial Monitor (for debugging)
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // If an object is within 30 cm, turn on the LED
  if (distance > 0 && distance < 30) {
    digitalWrite(ledPin, HIGH);
    lightState = true;
  } else if (distance > 50) {
    // If the object is no longer in range, turn off the LED
    digitalWrite(ledPin, LOW);
    lightState = false;
  }

  delay(100); // Short delay to stabilize readings
}