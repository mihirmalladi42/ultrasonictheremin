#define tPin1 A1
#define ePin1 A0
#define tPin2 A3
#define ePin2 A2

long duration1, distance1, duration2, distance2;

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}

void setup() {
  pinMode(tPin1, OUTPUT);
  pinMode(ePin1, INPUT);
  pinMode(tPin2, OUTPUT);
  pinMode(ePin2, INPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance1 = getDistance(tPin1, ePin1);
  distance2 = getDistance(tPin2, ePin2);

  int pitch = map(distance1, 2, 336, 100, 1000);
  pitch = constrain(pitch, 100, 1000);

  int volume = map(distance2, 2, 336, 0, 255);
  volume = constrain(volume, 0, 255);

 
  analogWrite(6, volume);
  tone(3, pitch);
  delay(50);
}
