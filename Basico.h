//Essas diretivas não deixarão as declarações/definições da biblioteca serem inseridas mais de uma vez em um projeto.
#ifndef BASICO.H
#define BASICO.H

#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
//#include <WiFi.h>

#include <Arduino.h>        ///usar as funçoes do arduino
//#include <ArduinoJson.h>    ///usar a bib Json
#include <EEPROM.h>         /// ler/escrer na EEPROM



class Basico
{
private:
    char *tag;
    char *desc; //t_com, param, consumo;

public:
    Basico(char *, char *);  //construtor
    void setTag(char *);// permitir alteração da tag
    void conecta(char *, char *);
    IPAddress getIp();

//    void post(int);
//    void liga(); //alimenta o atuador
//    void desliga(); // interrrompe o atuador
//    void getValorAtuador();
//    bool serValorAtuador(int novoValor);

};

#endif

