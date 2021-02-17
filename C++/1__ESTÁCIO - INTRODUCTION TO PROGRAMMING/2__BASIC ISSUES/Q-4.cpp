#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

main(){
cout<<"\n4 - Faça um programa em portugues estruturado que pergunte a idade de uma pessoa.\nSe a idade for menor ou igual a 12 exiba a mensagem:'Voce e uma crianca'.\nSe a idade for entre 13 e 19, exiba a mensagem:'Voce e um adolescente'.\nSe nao, exiba mensagem:'Voce e um adulto'.\n";
cout<<"\n(Se recem nascido digite seguinte o exemplo'0.2'(onde dois e a quantidade de meses))\n";
float testeIdade;
int escolher;

Retorno:
system("cls");
cout<<"\nDigite a Idade da pessoa: ";cin>>testeIdade;

while(testeIdade <= 0){
  cout<<"\nTente novamente...Digite a Idade da pessoa: ";cin>>testeIdade;
}

if(testeIdade <= 12){
  cout<<"\nVoce e uma crianca";
}
if(testeIdade >= 13 && testeIdade <= 19){
  cout<<"\nVoce e um adolescente";
}
if(testeIdade > 19){
  cout<<"\nVoce e um adulto";
}

cout<<"\nDeseja usar o programa novamente?\nSim(1) - Nao(Qualquer Tecla)...";cin>>escolher;
while(escolher != 1){
  return EXIT_SUCCESS;
}

if(escolher == 1){
  goto Retorno;
}

}
