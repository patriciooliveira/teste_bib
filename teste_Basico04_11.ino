#include <Basico.h>



void setup() {
  // put your setup code here, to run once:
Basico esp("hidro", "hidrometro");
esp.conecta("Robotica-IMD", "roboticawifi");
Serial.begin(115200);
Serial.print(esp.getIp());
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(".");
}
