//Essas diretivas não deixarão as declarações/definições da biblioteca serem inseridas mais de uma vez em um projeto.
#ifndef 
#define 

#include <Arduino.h> //usar as funçoes do arduino
#include <ArduinoJson.h> //usar a bib Json
#include <EEPROM.h> // ler/escrer na EEPROM


class Basico
{
public:
   Basico();  //construtor
   bool Status(); // deve retornar toda a configuração do sistema
   bool config(); // permitir alteração de todos os parametros do sistema
   void liga(); //alimenta o atuador
   void desliga(); // interrrompe o atuador
   void getValorAtuador();
   bool serValorAtuador(int novoValor);
   
 
private:

};

#endif

