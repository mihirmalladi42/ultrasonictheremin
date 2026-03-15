#include <LiquidCrystal_I2C.h>
#include <math.h>
#define tPin1 A1
#define ePin1 A0
#define tPin2 A3
#define ePin2 A2
long duration1, distance1, duration2, distance2;
LiquidCrystal_I2C lcd(32, 16, 2);
String notes[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}
void setup() {
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.backlight();
  lcd.display();
  pinMode(tPin1, OUTPUT);
  pinMode(ePin1, INPUT);
  pinMode(tPin2, OUTPUT);
  pinMode(ePin2, INPUT);
  pinMode(6, OUTPUT);
  Serial.begin(6000);
}
void loop() {
  distance1 = getDistance(tPin1, ePin1);
  distance2 = getDistance(tPin2, ePin2);
  int pitch = map(distance1, 2, 336, 100, 1000);
  pitch = constrain(pitch, 100, 1000);
  int volume = map(distance2, 2, 336, 0, 255);
  volume = constrain(volume, 0, 255);
  analogWrite(6, volume);
  float noteNum = 12 * log(pitch / 440.0) / log(2);
  int nearNote = round(noteNum) + 69;
  int noteI = nearNote % 12;
  int octave = (nearNote / 12) - 1;
  String note = notes[noteI] + String(octave);
  lcd.setCursor(0,0);
  lcd.print("Theremin MihirM");
  lcd.setCursor(0,1);
  lcd.print("Hz:");
  lcd.print(pitch);
  lcd.print(" Note:");
  lcd.print(note);
  tone(3, pitch);
  delay(50);
}
