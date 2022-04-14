#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
//questão 3 ) Escreva um programa para ler cinco valores reais, imprimir os valores lidos e determinar a nedia dos valores positivos e negativos
int main(){
    float lista[5];
    float totalP=0;
    float totalN=0;
    float mediaN;
    float mediaP;
    cout<<"insira 5 numeros"<<endl;
    for(int i=0;i<5;i++){
        scanf("%f",&lista[i]);
    }
    for(int i=0;i<5;i++){
        printf("%f ",lista[i]);
    }
    for(int i=0;i<5;i++){
        if(lista[i]>0){
            totalP=totalP + lista[i];
        }
    }
    for(int i=0;i<5;i++){
        if(lista[i]<0){
            totalP=totalN + lista[i];
        }
    }    
    mediaN=totalN/5 ;
    mediaP=totalP/5;  
    cout<<endl;
    cout<<"Media negativos:"<<mediaN<<endl;
    cout<<"media positivos"<<mediaP;


    return 0;
}