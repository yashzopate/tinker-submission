# Practical 8 — Sensors and Actuators

**Demonstration:** LM35 temperature sensor, potentiometer, I2C LCD, servo motor and DC motor driver.

**Important:** The sketch assumes an LM35 sensor, a servo on D9, and a motor-driver control input on D5. A DC motor must be powered through a suitable motor driver and external supply; never connect it directly to an Arduino output. Confirm the LCD I2C address (commonly 0x27 or 0x3F) and install the Servo and LiquidCrystal_I2C libraries.

**Procedure:** Wire components with power disconnected, check the supply and common ground, upload the sketch, and observe temperature on the LCD and potentiometer-controlled actuator response.

**Result:** Sensor values are read and displayed while the potentiometer controls the servo angle and motor-driver PWM level.
