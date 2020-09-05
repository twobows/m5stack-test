#include <M5Stack.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include "SparkFun_SCD30_Arduino_Library.h"
#include <Time.h>
#include <Wire.h>

//#define USE_AWSIOT    // comment out if you don't use Ambient for logging
#define USE_LINE_NOTICE

// WiFi setting
#define USE_WIFI
#if defined(USE_WIFI)
const char* ssid = "";       // write your WiFi SSID (2.4GHz)
const char* password = "";   // write your WiFi password
#endif





void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
