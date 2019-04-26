#include <SPI.h>
#include <Arduino.h>
#include <Wire.h>
#include <ArdusatSDK.h>

ArdusatSerial SerialConnection(SERIAL_MODE_HARDWARE_AND_SOFTWARE,8,9);
Display display ;
Int demodelay=2000;

Void setup(){
  Display.begin(SS-
D1306_SWITCHCAPVCC,0x3c);
}
Void loop(){
 Display.ClearDisplay();

Void loop(void)
{
SerialConnection.Println(lum.readToJSON(“lum”));
Delay(1000)
If(lum.lux<10.0){
Display.drawLine(12,2,24,2,WHITE);
Display.drawLine(12,2,12,25,WHITE);
Display.drawLine(12,25,24,25,WHITE);
Display.drawLine(24,25,24,2,WHITE);
Display.drawline(40,2,60,2,WHITE);
Display.drawLine(40,2,40,25,WHITE);
Display.drawLine(40,15,60,15,WHITE);
Display.drawLine(70,2,110,2,WHITE);
Display.drawLine(70,15,110,15,WHITE);
Display.drawLine(70,2,70,25,WHITE);
}
Else{
Display.drawLine(12,2,24,2,WHITE);
Display.drawLine(12,2,12,25,WHITE);
Display.drawLine(12,25,24,25,WHITE);
Display.drawLine(24,25,24,2,WHITE);
Display.drawLine(40,2,40,25,WHITE);
Display.drawLine(40,2,60,25,WHITE);
Display.drawLine(60,2,60,25,WHITE);
}
Delay(1000);
}

