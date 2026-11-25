# Practical 10 — Automatic Plant Irrigation

**Components:** Arduino Uno, soil-moisture sensor, relay module, low-voltage DC pump, suitable external pump supply and tubing.

**Circuit:** Sensor analog output to A0; relay input to D7. See `../../assets/irrigation-block-diagram.svg`.

**Safety:** Use a properly rated relay/driver and a separate supply suitable for the pump. Do not connect mains voltage for a student demonstration. Never power a pump directly from an Arduino pin. Check the relay's active-high/active-low behaviour before connecting the pump.

**Procedure:** Record sensor readings in dry and wet soil. Set `DRY_THRESHOLD` between the measured ranges. Upload the sketch and test the relay using a safe low-voltage load before operating the pump.

**Result:** The controller activates irrigation when the sensor indicates dry soil and stops when moisture is adequate.
