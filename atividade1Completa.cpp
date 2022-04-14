#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void Questao1(){
    float num;
    cout<<"insira um numero para descobrir sua raiz quadrada:"<<endl;
    cin>>num;
    num=sqrt(num);
    cout<<"raiz quadrada: "<<num;    
}
void Questao2(){
    cout<<"Equacao do segundo grau"<<endl;
    float a,b,c,y;
    float delta;
    float x1,x2;
    cout<<" dada a equacao y = (ax2 + bx + c)\ninsira o valor de a:"<<endl;
    cin>> a;
    cout<<"ninsira o valor de b:"<<endl;
    cin>> b;
    cout<<"ninsira o valor de c:"<<endl;
    cin>> c;
    cout<<"ninsira o valor de y:"<<endl;
    cin>> y;
    c=c-y;
    cout<<c;
    delta=b*b - 4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    cout<<"as variaveis a,b,c tem os respectivos valores "<<a<<" "<<b<<" "<<c<<endl;
    cout<<"o delta da equacao e"<<delta<<endl;
    cout<<"x1: "<<x1<<endl;
    cout<<"x2: "<<x2<<endl;
}
void Questao3(){
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
}
void Questao4(){
    while(true){
        int n;
        int k;
        int valor=1;
        cout<<"Calcule potencias"<<endl;
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
}
void Questao5(){
    int cont=0;
    int num;
    int nRand;
    cout<<"Adivinhe o numero sorteado pela maquina"<<endl;
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
}
int main(){
    int opcao=0;
	do{
		printf("\nSelecione a opcao: \n\n");
		printf("[1] - Questao 1: \n");
		printf("[2] - Questao 2: \n");
		printf("[3] - Questao 3: \n");
		printf("[4] - Questao 4: \n");
        printf("[5] - Questao 5:\n");
        scanf("%d", &opcao);

        	switch(opcao){
			    case 1:
				    Questao1();
				    break;
                case 2:
				    Questao2();
				    break;
                case 3:
                    Questao3();
                    break;
                case 4:
                    Questao4();
                    break;
                case 5:
                    Questao5();
                    break;
			    default:
				    printf("Opção inválida.");
		}

	}while(opcao != -1);

    return 0;
}