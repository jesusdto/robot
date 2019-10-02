
const int Trigger = A5;   //Pin digital 2 para el Trigger del sensor
const int Echo = A4;   //Pin digital 3 para el Echo del sensor
float d; //distancia en centimetros

void setupsensor()
{
      Serial.begin(115200);//iniciailzamos la comunicación
      pinMode(Trigger, OUTPUT); //pin como salida
      pinMode(Echo, INPUT);  //pin como entrada
      digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}

void sensor()
{

      long t; //timepo que demora en llegar el eco
    
      digitalWrite(Trigger, HIGH);
      delayMicroseconds(10);          //Enviamos un pulso de 10us
      digitalWrite(Trigger, LOW);
      
      t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
      d = t/59.00;             //escalamos el tiempo a una distancia en cm
      
//      Serial.print("Distancia: ");
//      Serial.print(d);      //Enviamos serialmente el valor de la distancia
//      Serial.print("cm");
//      Serial.println();
}



 
//   int ping(int TriggerPin, int EchoPin)
//   
//{
//           long duration, distanceCm;
//           
//           digitalWrite(TriggerPin, LOW);             //para generar un pulso limpio ponemos a LOW 4us
//           delayMicroseconds(4);
//           digitalWrite(TriggerPin, HIGH);            //generamos Trigger (disparo) de 10us
//           delayMicroseconds(10);
//           digitalWrite(TriggerPin, LOW);
//           
//           duration = pulseIn(EchoPin, HIGH);          //medimos el tiempo entre pulsos, en microsegundos
//           
//           distanceCm = duration * 10 / 292/ 2;        //convertimos a distancia, en cm
//           return distanceCm;
//}
