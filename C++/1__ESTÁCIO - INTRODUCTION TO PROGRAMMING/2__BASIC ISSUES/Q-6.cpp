#include<iostream>

using namespace std;
int main(void);

main(){
  cout<<"Numeros Pares: \n";
  for(int x = 1;x<=20;x++){
    if(x%2==0){
      cout<<"  "<<x;
    }
  }
  cout<<"\n\nNumeros Impares: \n";
  for(int x = 1;x<=20;x++){
    if(x%2==1)
    cout<<"  "<<x;
  }
  cout<<"\n\nApresentar todos os números divisíveis por 4 que sejam menores que 200\n";
  for(int x = 1;x<=200;x++){
    if(x%4==0){
      cout<<x;
      cout<<"\n";
    }
  }
  cout<<"\n\n";
}
