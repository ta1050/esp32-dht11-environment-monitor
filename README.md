ESP32 Temperature and Humidity Monitor

This project uses an ESP32 and DHT11 sensor to measure temperature and humidity. The sensor is connected to GPIO 23 and displays readings in the PlatformIO Serial Monitor.

Hardware:
ESP32, DHT11 sensor, breadboard, jumper wires, and USB cable.

Testing:
I recorded readings under normal room conditions, while blowing air onto the sensor, and with a lighter held nearby as a heat source.

The sensor initially produced failed readings. I checked the wiring, tested the sensor separately, and bypassed the breadboard to identify the problem. After fixing the connections, the sensor produced consistent readings.

Hardware Setup:
<img width="4032" height="3024" alt="hardware_setup (2)" src="https://github.com/user-attachments/assets/5dc5ac77-8f01-41bc-954e-eebb322b80f6" />

Baseline Temps/Humidity:
<img width="335" height="626" alt="baseline_temps_and_humidity" src="https://github.com/user-attachments/assets/01623668-4f1b-4293-8ea5-881029a8af69" />

Heat Source Test:
<img width="348" height="275" alt="heat_source_test" src="https://github.com/user-attachments/assets/00e5502a-ab3d-44b0-a296-6f51f03faf51" />

Airflow Test:
<img width="332" height="340" alt="airflow_test" src="https://github.com/user-attachments/assets/a0fc4324-a907-411a-ae00-b26784133e94" />

