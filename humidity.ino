#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    Serial.print(F("Humidity: "));
    Serial.print(h);
    Serial.print("\n");
    Serial.print(F("  Temperature: "));
    Serial.print(t);
    Serial.print(F("°C "));
    delay(2000);
}