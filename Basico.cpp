#include <Basico.h>

//Basico::Basico()
//{
//    this->tag = "objeto n definido";
//    this->ip = "objeto n conectado";
//    this->desc = "objeto n definido";
//    this->t_com = "nenhuma comunicacao";

//}
Basico::Basico(char *t, char *d)
{
    this->tag = t;
    this->desc = d;
}//construtor

void Basico::setTag(char *t)
{
    this->tag = t;
}

IPAddress Basico::getIp()
{
    return WiFi.localIP();
}

void Basico::conecta(char *rede, char *senha)
{
    WiFi.begin(rede, senha);
    while(WiFi.status() != WL_CONNECTED)
    {
        delay(500);
    }

    //PARA TESTE


}



