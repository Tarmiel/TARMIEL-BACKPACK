#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

main(){
  cout<<"1 - Construir um programa que efetue o calculo do salario liquido de um professor.\nPara fazer este programa voce devera possuir alguns dados, tais como:\nvalor da hora-aula (VH),\nNumero de aulas dadas no mes (HT)\nPercentual de desconto do INSS (PD).\n\nEm primeiro lugar, deve-se estabelecer qual sera o seu salario bruto (SB)\npara efetuar o desconto (TD) e ter o valor do salario liquido.\n";
  float VH,HT,PD,SD,TD;
  cout<<"\nValor da hora-aula: ";cin>>VH;
  cout<<"Numero de aulas dadas no mes: ";cin>>HT;
  cout<<"Percentual de desconto do INSS: ";cin>>PD;

  SD = VH*HT;
  cout<<"\nSalario Bruto: "<<SD<<"\n";
  TD = (PD/100)*SD;
  cout<<"Aplicando o percentual de desconto do INSS: "<<TD<<"\n";
  cout<<"Salario Liquido: "<<SD<<" - "<<TD<<" = "<<SD-TD<<"\n\n";
}
