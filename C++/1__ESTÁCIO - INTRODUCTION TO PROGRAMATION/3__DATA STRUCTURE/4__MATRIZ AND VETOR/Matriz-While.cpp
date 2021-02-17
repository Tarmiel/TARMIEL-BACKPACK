#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
main(){
	cout<<"---While---\n";
	int c,l,linha,coluna;
	
	cout<<"Linha: ";cin>>linha;
	cout<<"Coluna: ";cin>>coluna;
	float m[coluna][linha];

	cout<<"\n--Valores--\n";
	c=0;
	while(c<coluna){
		l=0;
		while(l<linha){
			cout<<"["<<c<<"]["<<l<<"] = ";cin>>m[c][l];
		l++;
		}
	c++;		
	}
	//exibir 
	cout<<"\n";
	c=0;
	while(c<coluna){
		l=0;
		while(l<linha){
			cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l]<<"\n";
		l++;
		}
	c++;		
	}
}
