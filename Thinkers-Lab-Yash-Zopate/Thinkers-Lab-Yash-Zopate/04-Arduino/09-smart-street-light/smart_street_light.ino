// Practical 9 / Value Added 4: Smart street light using LDR
// LDR + 10k resistor voltage divider midpoint -> A0
// LED (through 220 ohm resistor) -> D9

const byte LDR_PIN = A0;
const byte LAMP_PIN = 9;
const int DARK_THRESHOLD = 450; // calibrate using Serial Monitor

void setup() {
  pinMode(LAMP_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);
  bool isDark = lightLevel < DARK_THRESHOLD; // reverse if divider orientation differs
  digitalWrite(LAMP_PIN, isDark ? HIGH : LOW);

  Serial.print("LDR reading: ");
  Serial.print(lightLevel);
  Serial.print(" | Lamp: ");
  Serial.println(isDark ? "ON" : "OFF");
  delay(250);
}
