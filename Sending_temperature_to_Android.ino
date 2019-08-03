#include <SoftwareSerial.h> 
SoftwareSerial SwSerial(2, 3);
// RX, TX  
#include <BlynkSimpleSerial.h>
#include <BlynkSimpleStream.h>
#include <SimpleTimer.h> 
char auth[] = "e5beac0d31f4433da82dc64b99a03b39"; //replace this line with your char auth 
float temp;
int tempPin = 1; //analog pin 1 SimpleTimer timer; Fig. 3. 
 void setup()
 {  
    SwSerial.begin(9600); 
    Blynk.begin(auth);   timer.setInterval(1000L, sendUptime); } 
 void sendUptime()     {     
     
    Blynk.virtualWrite(10, temp);   
  } 
  void loop() { 
    Blynk.run();   
    timer.run(); // Initiates SimpleTimer   
    temp = analogRead(tempPin);  
    temp = temp * 0.488;     }
 }
