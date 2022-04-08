#include "tempo.h"
#include<iostream>

using namespace std;

    Tempo::Tempo(){
        hora=0;
        minuto=0;
        segundo=0;
    }
    Tempo::Tempo(int hh ,int mm ,int ss){
        hora = hh;
        minuto=mm;
        segundo=ss;
        }
    void TEMPO::setTempo(int,int,int){
        hora = hh;
        minuto=mm;
        segundo=ss;
    }
    void Tempo::imprime(){
        cout <<"{"<< hh<<":"<<mm<<":"<<ss<<"}";
    }
