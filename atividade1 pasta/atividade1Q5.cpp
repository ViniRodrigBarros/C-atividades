#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
/*5) Faça um programa para o “jogo de adivinhar um número”. O computador deve sortear
um número entre 0 e 100 e pedir para o usuário tentar adivinhar este número. O usuário
vai dizer o seu palpite, e o computador deve responder, se ele for maior ou menor que o
número que ele sorteou. O programa termina somente quando o usuário acertar
exatamente qual o número que o computador tinha sorteado, escrevendo uma mensagem
de felicitações para o nosso usuário e indicando o número total de tentativas feitas. Dica:
para gerar um número qualquer entre 0 e 100, use alguma biblioteca de número
randômicos (srand, rand).*/
int main(){
    int cont=0;
    int num;
    int nRand;
    while(true){
        nRand=rand() % 100;
        cout<<"Digite um valor: ";
        cin>>num;
        cout<<"valor sorteado foi : "<<nRand<<endl;
        if(num!= nRand){
            cont++;
        }
        else if(num== nRand){
            cout<<"Parabens voce conseguiu adivinhar o numero apos "<< cont <<"tentativas"<<endl;
            break;
        }
    }




    return 0;
}