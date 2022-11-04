#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "intruso.hpp"

using namespace std;

// Primeira ideia

void Intruso::set_senha_vazada(string vazou){
  map<char,char[2]> mapa;
  for (int i=0 ; i<16 ; i++){
    char x = 'A';
    mapa[x][0] = senha[i];
    mapa[x][1] = senha[i+2];


  }
  
}
