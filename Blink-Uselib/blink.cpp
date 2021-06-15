/*
blink.cpp - Simple example in creating your own Arduino Library
Copyright (c) op from TMM. All right reserved.

*/
 
#include <Arduino.h>
#include "blink.h"

Blink::Blink(int pin){
 pinMode(pin, OUTPUT);
 pinNumber = pin; 
}
 
void Blink::blink(bool value){
 if(value == true){
 for(int a=0;a<=255;a++){
     analogWrite(pinNumber,a);
     delay(8);
 }
 for(int a=255;a>=0;a--){
     analogWrite(pinNumber,a);
     delay(8);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}

void Blink::blink(bool value, int blinkLength ){
 if(value == true){
 for(int a=0;a<=255;a++){
     analogWrite(pinNumber,a);
     delay(blinkLength);
 }
 for(int a=255;a>=0;a--){
     analogWrite(pinNumber,a);
     delay(blinkLength);
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
 
void Blink::blink(bool value, int blinkLength, int blinkLoops){
 if(value == true){
 for(int i=0;i<blinkLoops;i++){
    for(int a=0;a<=255;a++){
        analogWrite(pinNumber,a);
        delay(blinkLength);
    }
    for(int a=255;a>=0;a--){
        analogWrite(pinNumber,a);
        delay(blinkLength);
    }
 }
 }else{
 digitalWrite(pinNumber,LOW);
 }
}
