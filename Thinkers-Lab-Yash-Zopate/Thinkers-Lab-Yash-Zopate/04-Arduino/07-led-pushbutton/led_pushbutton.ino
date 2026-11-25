// Practical 7: LED and push-button interfacing
// LED anode -> D9 through 220 ohm resistor; cathode -> GND
// Push button -> D2 and GND (uses internal pull-up)

const byte LED_PIN = 9;
const byte BUTTON_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  bool isPressed = (digitalRead(BUTTON_PIN) == LOW);
  digitalWrite(LED_PIN, isPressed ? HIGH : LOW);
  delay(10); // small debounce interval for a basic demonstration
}
