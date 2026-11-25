// Practical 10: Automatic plant irrigation
// Soil sensor analog output -> A0
// Relay module IN -> D7. Confirm relay active level for your module.

const byte SOIL_PIN = A0;
const byte RELAY_PIN = 7;
const int DRY_THRESHOLD = 600; // calibrate using readings in dry and wet soil
const bool RELAY_ACTIVE_LOW = true;

void setPump(bool on) {
  digitalWrite(RELAY_PIN, (on ^ RELAY_ACTIVE_LOW) ? HIGH : LOW);
}

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  setPump(false);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(SOIL_PIN);
  bool soilIsDry = moisture > DRY_THRESHOLD; // reverse if sensor gives opposite trend
  setPump(soilIsDry);

  Serial.print("Soil reading: ");
  Serial.print(moisture);
  Serial.print(" | Pump: ");
  Serial.println(soilIsDry ? "ON" : "OFF");
  delay(1000);
}
