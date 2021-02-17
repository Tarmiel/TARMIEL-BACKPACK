#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

main(){

  cout<<"\n4 - Faca um programa em portugues estruturado que pergunte a idade de uma pessoa.\n-Se a idade for menor ou igual a 12 exiba a mensagem:'Voce e uma crianca'.\n-Se a idade for entre 13 e 19, exiba a mensagem:'Voce e um adolescente'.\n-Se nao, exiba mensagem:'Voce e um adulto'.\n";
  int testeIdade,a = 1;
  int opc;

  inicio:
  cout<<"\n\nDigite a Idade da pessoa: ";cin>>testeIdade;

  while(testeIdade <= 0){
  	system("cls");
    cout<<"\nTente novamente...";
    goto inicio;
    }

  if(testeIdade > 0){
	    if(testeIdade < 13){
	      cout<<"\nVoce e uma crianca";
	      break;
	    }
	    if(testeIdade >= 13 && testeIdade <19){
	      cout<<"\nVoce e um adolescente";
		     break;
		  }
	    if(testeIdade >= 19){
	      cout<<"\nVoce e um adulto";
	      break;
	    }
	  }

  cout<<"\n\nDeseja usar o programa novamente?\nSim(1) - Nao(Qualquer Tecla)... = ";cin>>opc;
  if(opc==1){
    system("cls");
    goto inicio;
  }
}
