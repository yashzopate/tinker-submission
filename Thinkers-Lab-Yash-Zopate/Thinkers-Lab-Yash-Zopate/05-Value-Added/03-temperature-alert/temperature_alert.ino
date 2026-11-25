// Value Added 3: Temperature monitoring and alert
// LM35 OUT -> A0; buzzer positive -> D8 through suitable driver if required
// I2C LCD: SDA=A4, SCL=A5 on Uno; install LiquidCrystal_I2C library

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const byte TEMP_PIN = A0;
const byte BUZZER_PIN = 8;
const float ALERT_LIMIT_C = 30.0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(TEMP_PIN);
  float voltage = raw * (5.0 / 1023.0);
  float temperatureC = voltage * 100.0; // LM35 conversion

  bool alert = temperatureC >= ALERT_LIMIT_C;
  digitalWrite(BUZZER_PIN, alert ? HIGH : LOW);

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC, 1);
  lcd.print((char)223);
  lcd.print("C   ");
  lcd.setCursor(0, 1);
  lcd.print(alert ? "HIGH TEMP ALERT " : "Temperature OK  ");

  Serial.println(temperatureC);
  delay(500);
}
