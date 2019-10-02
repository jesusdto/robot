/********************************************************
 * PID Basic Example
 * Reading analog input 0 to control analog PWM output 3
 ********************************************************/

#include <PID_v1.h>

#define PIN_INPUT 0
#define PIN_OUTPUT 3

//Define Variables we'll be connecting to
double Setpoint, Input, Output;

//Specify the links and initial tuning parameters
double Kp=30, Ki=0.05, Kd=10;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);







  void SETUPPID()
{
                                                     //inicializar las variables a las que estamos vinculados
      Setpoint = 20;
      Input = Setpoint;
      //turn the PID on
      myPID.SetOutputLimits(-255,255);
      myPID.SetMode(AUTOMATIC);
      motorDER.run(RELEASE);
      motorIZQ.run(RELEASE);
}

    void tareaPID()
{
     Input = d;
     myPID.Compute();
//              Serial.println(Output);

      Serial.print(d);      //Enviamos serialmente el valor de la distancia
      Serial.print(" ");
      Serial.print(Setpoint);
      Serial.print(" ");
      Serial.println(0); 
      
                                                      // analogWrite(PIN_OUTPUT, Output);
                                                      
                                                      
           if ( Output==0)
                    {
                       motorDER.setSpeed(Output);
                       motorIZQ.setSpeed(Output);
                    }
            
           if ( Output>0)
                    {
                     motorDER.run(BACKWARD);
                     motorIZQ.run(BACKWARD);
                     motorDER.setSpeed(Output);
                     motorIZQ.setSpeed(Output);
                    
                    }
            else
            
                     {
                        motorDER.run(FORWARD);
                        motorIZQ.run(FORWARD);
                        motorDER.setSpeed(abs(Output));
                        motorIZQ.setSpeed(abs(Output));
                     }

 
}

 
