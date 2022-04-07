#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void desafio1(){
    float valor;
    float x = 0;
    printf("insira o elemento x\n");
    scanf("%f",&x);
    valor= x*x - 3*x + 5 ;
    printf("%f",valor);    
}
void desafio2(){
int i;
float media=0;
float nota=0;
for (i = 0; i < 3; i++){
    printf("\ninsira a nota\n");
    scanf("%f",&nota);
    media = media + nota;
} 
media = media/3;
printf("%f",media) ;  
} 
void desafio3(){
    int fat, n;
    printf("\nInsira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    for(fat = 1; n > 1; n = n - 1){
         fat = fat * n;
    }
    printf("\nFatorial calculado: %d", fat);
    }
void desafio4(){
    float renda;
    float idade;
    printf("informe sua idade");
    scanf("%f",&idade);
    printf("informe a sua renda");
    scanf("%f,&renda");
    if(renda > 1200 || idade < 21){
        printf("REPROVADO");
    }
    else{
        printf("APROVADO");
    }
    }
int main(){
    desafio1();
    desafio2();
    desafio3();
    desafio4();
  
    return 0;
}
