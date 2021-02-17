#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

main(){
cout<<"\n2 - Ler o nome e a idade de duas pessoas;\ncalcular a diferenca entre as idades e exibir o nome e a idade de cada uma e a diferenca de idade.\n";
int idade1,idade2,dif;
char nome1[12],nome2[12];

cout<<"\nEntre com o nome da primeira pessoa: ";cin>>nome1;
cout<<"Idade: ";cin>>idade1;

cout<<"\nEntre com o nome da segunda pessoa: ";cin>>nome2;
cout<<"Idade: ";cin>>idade2;

dif=idade1-idade2;

while(dif < 0){
  dif *= -1;
}
cout<<"\n";
cout<<nome1<<" tem "<<idade1<<" anos.\n";
cout<<nome2<<" tem "<<idade2<<" anos.\n\n";
cout<<"E a diferenca de idade entre os dois e de "<<dif<<" anos.";
}
