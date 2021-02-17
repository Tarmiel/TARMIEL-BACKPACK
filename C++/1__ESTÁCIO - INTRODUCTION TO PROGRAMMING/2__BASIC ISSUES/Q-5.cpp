#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

using namespace std;
//int main(void);

main(){
  int x = 3,c1 = 10,c2 = 20,c3 = 50,c4 = 100,renda,opc;

  cout<<"Digite o numero correspondente ao seu nivel apropriado de renda: ";cin>>renda;
  if(renda < 100){
    cout<<"\nSua renda e muito baixa, voce esta insento de pagamento.";
  }
  if(renda >= 100 && renda < 200){
    cout<<"\nA sua contribuicao e de R$"<<c1<<".\n";
  }
  if(renda >= 200 && renda < 400){
    cout<<"\nA sua contribuicao e de R$"<<c2<<".\n";
  }
  if(renda >= 400 && renda < 1000){
    cout<<"\nA sua contribuicao e de R$"<<c3<<".\n";
  }
  if(renda >= 1000){
    cout<<"\nA sua contribuicao e de R$"<<c4<<".\n";
  }
  cout<<"\n[1] - [0]: ";cin>>opc;
  if(opc == 1){
    system("cls");
    main();
  }
  if(opc != 1){
    return 0;
  }
}
