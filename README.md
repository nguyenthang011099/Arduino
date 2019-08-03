# Arduino
# Controlling Arduino with Blynk via Bluetooth 

 ## This  work  presents  how  to  connect  Arduino  board  to  a  smartphone  via  Bluetooth  
  send  commands  in both directions, from  smartphone  to Arduino board and vice  versa.
 For this project we need an Arduino UNO or Mega board, Bluetooth module HC 05 and Android  smartphone. 
 HC  05  is  a  transceiver  that  realizes  the  connection  between  the smartphone and  Arduino  board. 
 It is  shown in the figure 1. It work at 3.3 V but it can be powered  by  the  5  V  of  Arduino  board because 
 it  contains  an  integrated  regulator which  reduces  at  3.3  V  the  tension  from Arduino. However the 
signals  applied on its pins  do  not  exceed  3.3  V.  Arduino  sends signals  on  Tx  pin  with  maximum  5V amplitude,
 so we must reduce this tension at 3.3 V  by a  resistive divider,  2.2/4.7 K,  (see Fig.  2). 
 The  signals  on  the  out  of  HC  05, available  on  pin  Tx,  have  maximum amplitude  3.3V  so  they  can  be  applied directly to the Rx pin of Arduino, 
which can supports  signals  up  to  5  V.  The  wiring  is presented  in  figure  2.  One  led  will  be connected between D13 pin and GND
