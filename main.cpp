#include <Arduino.h>
#include <DHT.h>
#include <math.h>

// DHT11 signal pin is connected to ESP32 D23
constexpr uint8_t DHT_PIN = 23;

DHT dht(DHT_PIN, DHT11);

void setup() {
  Serial.begin(115200);
  dht.begin();

  Serial.println();
  Serial.println("DHT11 temperature and humidity monitor");
  delay(2000);
}

void loop() {
  float temperatureC = dht.readTemperature();
  float temperatureF = dht.readTemperature(true);
  float humidity = dht.readHumidity();

  if (isnan(temperatureC) ||
      isnan(temperatureF) ||
      isnan(humidity)) {
    Serial.println(
        "DHT11 read failed. Check S->D23, middle->3V3, right->GND.");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperatureC, 1);
    Serial.print(" C | ");

    Serial.print(temperatureF, 1);
    Serial.print(" F | Humidity: ");

    Serial.print(humidity, 0);
    Serial.println("%");
  }

  delay(2000);
}