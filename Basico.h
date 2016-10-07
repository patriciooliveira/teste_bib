//Essas diretivas não deixarão as declarações/definições da biblioteca serem inseridas mais de uma vez em um projeto.
#ifndef BASICO.H
#define BASICO.H

#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFi.h>

#include <Arduino.h>        ///usar as funçoes do arduino
#include <ArduinoJson.h>    ///usar a bib Json
#include <EEPROM.h>         /// ler/escrer na EEPROM

#include <cstring>


class Basico
{
private:
    String tag, desc; //t_com, param, consumo;
    IPAddress ip_local;

//    int estado_atual;
//    int ciclo; //ciclo vai variar pra cada objeto derivado da classe

public:
//    Basico();

    Basico(String, String);  //construtor
    //void Status();

// deve retornar o ip, a tag, descriçao, tipo de comunicação, parametros, estado atual e o consumo na ultima janela de tempo e o endereço de cada ação do dispositivo
//retornar onde?

    void config(String, String);

// permitir alteração da tag e descrição,

    void conecta(char*, char*);//ok
    void post(int);
   
//    void liga(); //alimenta o atuador
//    void desliga(); // interrrompe o atuador
//    void getValorAtuador();
//    bool serValorAtuador(int novoValor);
   
};

#endif

