String inputString = "";                        //una cadena para contener datos entrantes
bool stringComplete = false;






void loop4 (){
(stringComplete); // imprime la cadena cuando llega una nueva línea:

                                               
      if  (inputString.startsWith("d")) // i cadena completa separada por un enter
              {  
                   Serial.print ("");
                   Serial.println(inputString);   
               }

     
}

/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent() 
{
  while (Serial.available()) 
  {
          // get the new byte:
          char inChar = (char)Serial.read();
          // add it to the inputString:
          inputString += inChar;
                                                 // Si el carácter entrante es una nueva línea, establezca una bandera para que el bucle principal 
                                                  // pueda Hacer algo al respecto:
          if (inChar == '\n') {
          stringComplete = true;
    }
  }
}
