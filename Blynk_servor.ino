#include <SoftwareSerial.h> 
SoftwareSerial SwSerial(2, 3); // RX, TX 
#include <BlynkSimpleSerial.h> 
#include <BlynkSimpleStream.h> //important for BT communication 
#include <SPI.h> #include <Servo.h> 
char auth[] = "e5beac0d31f4433da82dc64b99a03b39"; 
 Servo servo;
 void setup() {  
     SwSerial.begin(9600); 
     Blynk.begin(auth);  
     servo.attach(9); 
     }
     BLYNK_WRITE(V7) {  
    servo.write(param.asInt());
    }
void loop() 
    {  
      Blynk.run();
    }
