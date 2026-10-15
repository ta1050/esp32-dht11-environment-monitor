ESP32 Temperature and Humidity Monitor

This project uses an ESP32 and DHT11 sensor to measure temperature and humidity. The sensor is connected to GPIO 23 and displays readings in the PlatformIO Serial Monitor.

Hardware:
ESP32, DHT11 sensor, breadboard, jumper wires, and USB cable.

Testing:
I recorded readings under normal room conditions, while blowing air onto the sensor, and with a lighter held nearby as a heat source.

![Hardware setup](images/hardware-setup.jpg)

![Normal readings](images/baseline-readings.png)

![Blown air readings](images/airflow-test.png)

![Heat readings](images/heat-source-test.png)

The sensor initially produced failed readings. I checked the wiring, tested the sensor separately, and bypassed the breadboard to identify the problem. After fixing the connections, the sensor produced consistent readings.
