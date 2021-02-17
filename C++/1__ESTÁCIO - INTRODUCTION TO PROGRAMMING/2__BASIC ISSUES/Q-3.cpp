#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

main(){
cout<<"3 - Escreva um algoritmo que leia 3 valores inteiros diferentes, determine e imprima o menor deles.\n";
int a,b,c;

cout<<"\nInsira o valor A: ";cin>>a;
cout<<"Insira o valor B: ";cin>>b;
cout<<"Insira o valor C: ";cin>>c;

while(a == b || b == c || a == c || c == a || c == b){
  system("cls");
  cout<<"3 - Escreva um algoritmo que leia 3 valores inteiros diferentes, determine e imprima o menor deles.\n";

  cout<<"\nTente novamente..\n";
  cout<<"Insira o valor A: ";cin>>a;
  cout<<"Insira o valor B: ";cin>>b;
  cout<<"Insira o valor C: ";cin>>c;
}
if(a<b && a<c){
  cout<<"\nA e o menor valor.\n";
}
if(b<a && b<c){
  cout<<"\nB e o menor valor.\n";
}
if(c<a && c<b){
  cout<<"\nC e o menor valor.\n";
}
