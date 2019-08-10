#include <SoftwareSerial.h> 
SoftwareSerial SwSerial(2, 3); 
// RX, TX #define BLYNK_PRINT SwSerial 
#include <BlynkSimpleSerial.h> 
#include <BlynkSimpleStream.h>

char auth[] = "e5beac0d31f4433da82dc64b99a03b39"; 

void setup() 
    {   
          SwSerial.begin(9600); 
          Blynk.begin(auth);

    } 
void loop()
   {  
    Blynk.run();
   }
