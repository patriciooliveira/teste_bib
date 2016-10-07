#include <Basico.h>



#define serial  Serial

//#define pino D2

/*
   variáveis
*/
char* ssid = "NPITI";
char* password = "";

int estado = 0;
int contador = 0;
Basico esp_teste("ESP-4", "hidro");

void setup() {
//  pinMode(pino, INPUT_PULLUP);
  esp_teste.conecta(ssid, password);


}

/*
    config http client
*/


void loop() {
  /*
    if (!digitalRead(pino) && estado == 0)
    {
      contador++;
      estado = 1;
      Serial.print(contador);
      //delay(100);
    }
    if (digitalRead(pino) && estado == 1)
    {
      estado = 0;
    //  delay(100);
    }
    Serial.println(digitalRead(pino));
  */

  contador = random(1,1000);
  esp_teste.post(contador);
//  post(contador);

}
