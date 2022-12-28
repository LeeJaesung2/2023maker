#ifndef __MAKER_H__
#define __MAKER_H__
#include "thingProperties.h"
#include <BlynkSimpleEsp8266.h>
#include <GP2YDustSensor.h> //dust sensor
#include <DHT.h> //humidity and temperature sensor
#include <Adafruit_NeoPixel.h> //neopixel
#include <SoftwareSerial.h>

#define WIFI_PASSWORD "passward"
#define DEBUG true; 

class WifiClass{
    public:
        const *char ssid = "jaesung's iPhone";
        const *char password = "1234567890";
};

class FanMotorClass{
    public:
        void turnOnMotor(int speed);
        void turnOffMotor();

};

class NeopixelClass{
    enum{
        led;
        green;
        blue;
        orange;
        purple
    }color;

    void turnOnLed(int color);

};

class DustSensorClass{
    public:
        unsigned long dustReadPriviousMillis;
        unsigned long dustReadInterval = 100;
        float dustRaw;
        float dustAverage;

        void readDustDensity();

};

class DHTSensorClass{
    public:
        unsigned long dht11PreviousMillis;
        unsigned long dht11Interval = 100;
        float humidity;
        float temperature;

        void readDHT();

};



#endif