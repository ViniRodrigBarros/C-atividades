#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*Escreva um programa para ler vários pares de números, um n inteiro e um natural k.
A cada par lido deve-se calcular e mostrar n k
. A leitura deve ser encerrada quando k for
menor que zero. Nesta questão, é proibida a utilização da biblioteca math ou qualquer
outro recurso de cálculo matemático de C++. Dica: utilize um WHILE e um FOR;
*/

int main(){
    while(true){
        int n;
        int k;
        int valor=1;
        cout<<"insira o valor de N:\n";
        cin>>n;
        cout<<"insira o valor de K:\n";
        cin>>k;
        if(k<0){
            printf("Fim do programa");
            break;
        }
        for(int i=0;i<k;i++){
            valor=valor*n;
        }
            printf("\nA potenciacao de %d e %d = %d \n\n",k,n,valor);

    }
 
    return 0; 
}