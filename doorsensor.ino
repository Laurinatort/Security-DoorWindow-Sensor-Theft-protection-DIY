#include <WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "wifi_config.h"
#include "mqtt_config.h"
#include <Wire.h>

#define reedPin 17
#define vibPin 3
#define speakPin 2
#define rtclPin 7
#define rtcsda 6
#define modeJump 8
#define soundJump 9
#define pwrJump 10


WiFiClient wificlnt;
PubSubClient mqtt(wificlnt);

bool wcon = 0;
bool mcon = 0;
unsigned long lwc = 0;
unsigned long lmc = 0;
unsigned long lds = 0;
unsigned long lcs = 0;
String SSID;
String pw;

const unsigned long DSEND_T = 10;

int vibcheck() {

}

int statecheck() {

}

void Alarm(){

}

void sendMSG() {

}

void setup() {
  Serial.begin(115200);
  while(!Serial);

  PinMode(reedPin, INPUT);
  PinMode(vibPin, INPUT);
  PinMode(speakPin, OUTPUT);
  PinMode(modeJump, INPUT);
  PinMode(soundJumo, INPUT);
  PinMode(pwrJump, INPUT);

  WiFisetup();
  MQTTsetup();
}

void loop() {
  
}

void WiFisetup() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, PW);
  Serial.print("WiFi connected SSID: ");
  Serial.print(SSID);
  Serial.print("Password: ");
  Serial.print(PW);

  int trycount = 0;
  while(WiFi.status() != WL_CONNECTED && trycount < 50) {
    delay(1000);
    Serial.print("connecting to wifi...");
    trycount++;
  }
}

void WiFicheck() {
  
}

String WiFistatus() {

}

void MQTTsetup() {

}

void MQTTcheck() {
  
}

void revieve() {

}

void cmdhandle() {

}

void cfghandle() {
  
}

void sendData() {

}

void sendcheck() {

}

void sendconstate() {

}

void sendresponse() {

}