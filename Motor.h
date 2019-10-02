// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>



AF_DCMotor motorDER(1);             //DERECHO
AF_DCMotor motorIZQ(3);             //isquier5da



void setupMotor()

    {
        motorDER.run(RELEASE);
        motorIZQ.run(RELEASE);
    }



//void loop() 
//{
//
//
//        Serial.print("tick");
//            (FORWARD);       //PARA IR HASIA DELANTE 
//        motorDER.setSpeed(255);  
//        motorDER.run(FORWARD);
//        motorDER.setSpeed(255);
//        motorIZQ.setSpeed(255);  
//        motorIZQ.run(FORWARD);
//        motorIZQ.setSpeed(255); 
//        delay(5000);
//        
//        
//        Serial.print("tick");
//            (BACKWARD);      //PARA IR HACIA ATRAS 
//
//        motorDER.setSpeed(255);
//        motorDER.run(BACKWARD);     
//        motorDER.setSpeed(255); 
//        motorIZQ.setSpeed(255);
//        motorIZQ.run(BACKWARD);     
//        motorIZQ.setSpeed(255);  
//        delay(5000);
//
// }
