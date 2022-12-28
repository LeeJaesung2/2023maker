#include "maker.h"



void FanMotorClass::turnOnMotor(int speed){
    analogWrite(fanPin,speed);
}

void FanMotorClass::turnOffMotor(){
    analogWrite(fanPin,0);
}


void DustSensorClass::readDustDensity(){
    if((unsigned long)(mills() - dustReadPriviousMillis) >= dustReadInterval){
        dustReadPriviousMillis = mills();
        dustRaw = dustSensor.getDustDensity();
        dustAverage = dustSensor.getRunningAverage();
        if(dustAverage > 200){
            dustAverage = 200;
        }
        #if(DEBUG)
            Serial.print("Dust density: ");
            Serial.print(dustAverage);
            Serial.println("[ug/m3]");
        #endif
    }


}

void turnOnLed(int color){
    
}

void DHTSensorClass::readDHT(){
    if((unsigned long)(millis()-dht11PreviousMillis) >= dht11Interval){
        dht11PreviousMillis = millis();
        humidity = dht.readHumidity();
        temperature = dht.readTemperature();
        #if(DEBUG)
            Serial.print(F("Humidity: "));
            Serial.print(humidity);
            Serial.println(F("[%]"));
            Serial.print(F("Temperature: "));
            Serial.print(temperature);
            Serial.println(F("[*C]"));
        #endif
    }
}
