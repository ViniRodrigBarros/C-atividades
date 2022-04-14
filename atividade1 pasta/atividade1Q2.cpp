#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    /*questão 2 ) Escreva um programa que o usuário digite as variáveis a, b e c de uma equação do 2o
    grau (ax2 + bx + c). Em seguida, mostre os valores das variáveis a, b e c, o valor de ∆
    (delta) e imprima as raízes da equação.
    */
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
    return 0;
}