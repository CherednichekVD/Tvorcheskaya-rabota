#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int moisturePin = A0;
const int lightPin = A1;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Считывание данных с датчиков
  int moisture = analogRead(moisturePin);
  int light = analogRead(lightPin);
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Форматирование данных в строку
  String data = String(moisture) + "," + 
               String(temp) + "," + 
               String(humidity) + "," + 
               String(light);
  
  Serial.println(data);
  delay(2000);
}
