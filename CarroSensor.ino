// Planificador de tareas
// -- Librerías ------------------------------------------


// -- Variables de control de tiempo ---------------------
unsigned long int T; // Tiempo total (microsegundos)
// -- Variables de temporización de tareas

#include "Motor.h"     // llama a la pagina 
#include "sensor.h"    // "    "     "
#include "PID_v1.h"    //  "   "     "
//--------------------------------------------------------

// Tarea 1: Control de Motor
#define Ts1 50 // Periodo de la tarea 1
unsigned long int ts1; // Tiempo parcial tarea 1
unsigned long int t01; // Tiempo de la última ejecución

// Tarea 2: Control de sensor
#define Ts2 100 // Periodo de la tarea 2
unsigned long int ts2; // Tiempo parcial tarea 2
unsigned long int t02; // Tiempo de la última ejecución

// Tarea 3: control del PID
//#define Ts3 200 // Periodo de la tarea 3
//unsigned long int ts3; // Tiempo parcial tarea 3
//unsigned long int t03; // Tiempo de la última ejecución

// -- Funciones de definición de tareas ------------------




// -- Inicializacion -------------------------------------
void setup() {
 // Inicializacion de temporizadores de tarea
 ts1 = 0;
 t01 = 0;
 ts2 = 0;
 t02 = 0;
// ts3 = 0;
// t03 = 0;
 
setupMotor();
SETUPPID();
setupsensor();
}
// -- Bucle principal ------------------------------------
void loop() {
 // Actualizar tiempo
 T = millis();

  // Temporizacion tarea 1
 ts1 = T - t01;
 if (ts1 >= Ts1)
   {
    tareaPID();
     t01 = T;
   }

 
 // Temporizacion tarea 2
 ts2 = T - t02;
 if (ts2 >= Ts2) 
   {
     sensor();
     t02 = T;
   }

 
// // Temporizacion tarea 3
// ts3 = T - t03;
// if (ts3 >= Ts3)
//   {
// Motor();
//   t03 = T;
//    }
 
}
