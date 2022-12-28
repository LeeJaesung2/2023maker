#ifndef __MAKER_H__
#define __MAKER_H__
#include <WiFi.h>
#include <SoftwareSerial.h>

#define WIFI_SSID "ssid"
#define WIFI_PASSWORD "passward"
#define DEBUG true; 

class WifiClass{
    public:
        void connWifi();
};

class FanMotorClass{
    public:
        void turnOnMotor();
        void turnOffMotor();

};

class NeopixelClass{

};

class DustSensorClass{
    public:
        void getDuststValue();

};

class TempAndhumSensorClass{
    public:
        void getTemperature();
        void getHumidity();

};



#endif