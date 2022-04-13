#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Quadrado{
    private:
        int id;
        float base;

    public:
        void getBase();
        void perimetro();
        void area();
};

void Quadrado::getBase(){
 cout<<"insira a base do quadrado" << endl;
 cin >> base;
}
void Quadrado::perimetro(){
    float per;
    per=base*4;
    cout<<"O perimetro do quadrado e " << per << endl;

}
void Quadrado::area(){
    float ar;
    ar=base*base;
    cout<<"a area do quadrado e "<<ar<<endl;
}
class Cidade{
    private:
        string nome;
        float pop;
        float areaHab;
    public:
        void getNome();
        void getPop();
        void getAreaHab();
        void denisdadeDemo();
};
void Cidade::getNome(){
    cout<<"insira o nome da cidade" << endl;
    cin >> nome;
}

void Cidade::getPop(){
    cout<<"insira a populacao de" <<nome<< endl;
    cin >> pop;
}
void Cidade::getAreaHab(){
    cout<<"insira a area da cidade em km2" << endl;
    cin >> areaHab;
}
void Cidade::denisdadeDemo(){
    float densidade;
    densidade = pop/areaHab;
    cout<<"a cidade "<< nome<<" possui "<<pop<<" habitantes e uma densidade demografica de "<<densidade<<" por km2"<< endl;
    
}

int main(){
    Quadrado quadrado = Quadrado();
    Cidade cidade = Cidade();
    int opcao = 0;

	do{
		printf("\nSelecione a opção: \n\n");
		printf("[1] - Quadrado \n");
		printf("[2] - Cidade: \n");
        scanf("%d", &opcao);
        switch(opcao){
			case 1:
				quadrado.getBase();
                quadrado.perimetro();
                quadrado.area();
				break;
			case 2:
				
                cidade.getPop();
                cidade.getAreaHab();
                cidade.denisdadeDemo();
				break;
        }

	}while(opcao != -1);
    return 0;
}
