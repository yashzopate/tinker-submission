# Practical 9 — Smart Street Light Using LDR

**Components:** Arduino Uno, LDR, 10 kΩ resistor, LED, 220 Ω resistor, breadboard and wires.

**Circuit:** Build an LDR voltage divider; connect its midpoint to A0. Connect an LED to D9 through a current-limiting resistor. See `../../assets/ldr-streetlight-block-diagram.svg`.

**Procedure:** Upload the sketch and observe A0 readings in Serial Monitor. Cover the LDR to simulate darkness and expose it to light. Adjust `DARK_THRESHOLD` based on measured readings. If the reading rises in darkness instead, reverse the comparison.

**Result:** The LED switches according to ambient light level.
