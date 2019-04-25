# Arduino---Heart-Rate-Monitor
Arduino Project

For this project I contructed a heartbeat monitor which will calculate the bpm (beats per minute) and 
display it onto an LCD display via Bluetooth. A heart rate sensor module is used to measure the bpm using 
the person’s finger. An LCD display will be connected to a second Arduino which will display the bpm of the 
person. Both Arduinos will have a Bluetooth module. The data from the heart rate sensor will be sent to the 
other Arduino through Bluetooth module and will be displayed on the LCD connected to the second Arduino.

Materials: 2 Arduinos, 2 Bluetooth modules (HC-05), finger pulse sensor (max30105), LCD display, LED light, potentiometer, 2 breadboards, wires & resistors.

There are two arduino code files. The master code is for the arduino with the finger sensor. The slave code is the arduino receiving the data and displaying it. So, the bluetooth should be setup in those roles.
  
