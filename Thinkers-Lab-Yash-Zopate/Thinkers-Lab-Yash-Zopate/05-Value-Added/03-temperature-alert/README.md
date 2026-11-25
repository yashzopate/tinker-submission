# Value Added 3 — Smart Temperature Monitoring and Alert

**Components:** Arduino Uno, LM35 temperature sensor, buzzer, I2C LCD and jumper wires.

**Connections:** LM35 output to A0; buzzer to D8 (use a transistor driver if the buzzer current exceeds the pin rating); LCD SDA/SCL to A4/A5 on Uno.

**Procedure:** Upload the sketch, observe the LCD and Serial Monitor, and gently warm the sensor without exceeding its rated temperature. The buzzer activates at or above 30 °C. Change `ALERT_LIMIT_C` if the task specifies a different threshold.

**Result:** Temperature is displayed and an audible alert is generated above the set threshold.
