#include <ESP8266WiFi.h>

#define SSID "zasheewarna"
#define PSK "95199519"

void setup() {
	Serial.begin(9600);

	WiFi.begin(SSID, PSK);

  Serial.println("Connecting wifi");
	while(WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
	}
  Serial.println();
  Serial.print("SSID ");
  Serial.println(SSID);
  Serial.print("IP ");
  Serial.println(WiFi.localIP());
  
}

void loop() {
	
}
