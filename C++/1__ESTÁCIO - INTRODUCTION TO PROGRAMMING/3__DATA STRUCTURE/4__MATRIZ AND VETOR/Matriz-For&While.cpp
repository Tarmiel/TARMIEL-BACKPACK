#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
main(){/*
	cout<<"Com For\n";
	int c,l,linha,coluna;

	cout<<"Linha: ";cin>>linha;
	cout<<"Coluna: ";cin>>coluna;
	float m[coluna][linha];

	cout<<"\n--Valores--\n";
	for(c=0;c<coluna;c++){
		for(l=0;l<linha;l++){
			cout<<"Valor para >> M["<<c<<"]["<<l<<"]= ";cin>>m[c][l];
		}
	}
	//exibir
	cout<<"\n";
	for(c=0;c<coluna;c++){
		for(l=0;l<linha;l++){
			cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l]<<"\n";
		}
	}
	*/

	cout<<"Com While e For\n";
	int c,l,linha,coluna;

	cout<<"Linha: ";cin>>linha;
	cout<<"Coluna: ";cin>>coluna;

	float m[coluna][linha];

	cout<<"\n--Valores--\n";
	c=0;
	while(c<coluna){
		for(l=0;l<linha;l++){
			cout<<"Valor para >> M["<<c<<"]["<<l<<"]= ";cin>>m[c][l];
		}
	c++;
	}
	//exibir
	cout<<"\n";
	c=0;
	while(c<coluna){
		for(l=0;l<linha;l++){
			cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l]<<"\n";
		}
	c++;
	}
}
