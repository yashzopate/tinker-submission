// Practical 8: Sensor and actuator demonstration
// LM35 OUT -> A0; potentiometer wiper -> A1
// Servo signal -> D9; DC motor driver input -> D5 (use a driver, not a GPIO pin)
// LCD I2C -> SDA/SCL (Uno: A4/A5); library: LiquidCrystal_I2C

#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const byte TEMP_PIN = A0;
const byte POT_PIN = A1;
const byte MOTOR_PIN = 5;
const byte SERVO_PIN = 9;

Servo arm;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  arm.attach(SERVO_PIN);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  int rawTemp = analogRead(TEMP_PIN);
  float voltage = rawTemp * (5.0 / 1023.0);
  float tempC = voltage * 100.0; // LM35: 10 mV per degree C

  int potValue = analogRead(POT_PIN);
  int angle = map(potValue, 0, 1023, 0, 180);
  int motorLevel = map(potValue, 0, 1023, 0, 255);

  arm.write(angle);
  analogWrite(MOTOR_PIN, motorLevel); // connect to a motor driver input

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1);
  lcd.print((char)223);
  lcd.print("C   ");
  lcd.setCursor(0, 1);
  lcd.print("Servo:");
  lcd.print(angle);
  lcd.print("   ");

  Serial.print("Temperature C: ");
  Serial.print(tempC);
  Serial.print(" | Pot: ");
  Serial.println(potValue);
  delay(500);
}
