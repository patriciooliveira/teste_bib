#include <Basico.h>

//Basico::Basico()
//{
//    this->tag = "objeto n definido";
//    this->ip = "objeto n conectado";
//    this->desc = "objeto n definido";
//    this->t_com = "nenhuma comunicacao";

//}
Basico::Basico(char t[], char d[])
{
    this->tag = t;
    this->desc = d;
}//construtor

void Basico::setTag(char t[])
{
    this->tag = t;
}

void Basico::conecta(char rede[], char senha[])
{
    WiFi.begin(rede, senha);
    while(WiFi.status() != WL_CONNECTED)
    {
        delay(500);
    }
    this->ip = WiFi.localIP();
    
    //PARA TESTE
       
    
}

void Basico::post(int valor)
{
      HTTPClient http;//cria o objeto http
      http.begin("http://" + "aqui vai o ip do nó central" + "/yii/web/index.php?r=sensor/create/");
      http.addHeader("Content-Type", "application/json; charset=UTF-8");
      int httpCode = http.POST("{\"tag\":\"ESP-4\",\"valor\":" +
                               String(valor) +
                               ",\"data_hora\":\"2016-" +
                               String(random(1,13)) +
                               "-02 11:11:11\"}");//Retorna o código http, caso não conecte irá retornar -1

      //      String payload = http.getString();

      //      Serial.print(httpCode);

      //      Serial.println(" " + payload);
      http.end();

}//faz isso de forma genérica, utilizando a tag do objeto aqui


