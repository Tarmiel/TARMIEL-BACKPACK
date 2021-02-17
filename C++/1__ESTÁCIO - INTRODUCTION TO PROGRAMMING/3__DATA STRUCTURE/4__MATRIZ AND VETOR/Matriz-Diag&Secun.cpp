#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
main(){
	cout<<"--Matriz--\n";
	int c,l,linha,coluna;

  cout<<"Coluna: ";cin>>coluna;
	cout<<"Linha: ";cin>>linha;
	float m[coluna][linha];

	cout<<"\n--Valores--\n";
	c = 0;
	while(c<coluna){
		l = 0;
		while(l<linha){
			cout<<"["<<c<<"]["<<l<<"] = ";cin>>m[c][l];
		l++;
		}
	c++;
	}
  cout<<"\n--Mostrando Matriz Diagonal--\n";
  for(c = 0;c<coluna;c++){
    for(l = 0;l<linha;l++){
      if(c==l){
        cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l];
      }
    cout<<"\t";
    }
  cout<<"\n";
  }
  cout<<"\n--Mostrando Matriz Secundaria--\n";
  for(c = 0;c<coluna;c++){
    for(l = 0;l<linha;l++){
      if(coluna-1==c+l){
        cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l];
      }
    cout<<"\t";
    }
  cout<<"\n";
  }


}
