#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
Servo gateServo;

int irPin = 8;          // IR sensor at gate
int slotTrig = 10;      // Ultrasonic Trigger
int slotEcho = 11;      // Ultrasonic Echo
int buzzer = A0;        // buzzer pin

long slotDistance();

void setup() {
  lcd.begin(16, 2);
  gateServo.attach(9);

  pinMode(irPin, INPUT);
  pinMode(slotTrig, OUTPUT);
  pinMode(slotEcho, INPUT);
  pinMode(buzzer, OUTPUT);

  gateServo.write(0); // gate closed

  lcd.setCursor(0, 0);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("System Ready!");
  tone(buzzer, 2000, 250);
  delay(2000);
}

void loop() {

  long slotDist = slotDistance();
  int carDetected = digitalRead(irPin);

  lcd.clear();

  // Slot status on LCD
  if (slotDist < 12) {
    lcd.print("SLOT FULL");
  } else {
    lcd.print("SLOT AVAILABLE");
  }

  // When car comes to gate
  if (carDetected == LOW && slotDist > 12) {
    lcd.clear();
    lcd.print("Car Detected");
    lcd.setCursor(0, 1);
    lcd.print("Opening Gate");

    tone(buzzer, 2500, 200);
    gateServo.write(90);   // open gate
    delay(3000);

    gateServo.write(0);    // close gate
    delay(1000);
  }

  delay(300);
}

// Slot sensor function
long slotDistance() {
  digitalWrite(slotTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(slotTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(slotTrig, LOW);

  long duration = pulseIn(slotEcho, HIGH);
  return duration * 0.034 / 2;  
}
