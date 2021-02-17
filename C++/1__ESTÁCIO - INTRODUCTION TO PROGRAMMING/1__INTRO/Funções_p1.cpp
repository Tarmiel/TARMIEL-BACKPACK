#include<iostream>
using namespace std;

/*void texto(); Prototipando a função texto
para poder usar dentro do programa principal.

void soma(int a,int b);
int soma2(int a,int b);*/
void tr(string tra[4]);

int main() {
  /*cout<<"Teste 01";
  texto();

  for(int i=0;i<10;i++){
    texto();
  }
  int res;

  res = soma2(100,85);
  cout<<"Valor da variavel res "<<res<<"\n"; //Ou
  //cout<<"Valor da variavel res "<<soma2<<"\n";
  return 0;
  */
  string transp[4]=("carro","moto","caminhao","aviao");

  tr(transp); //chamar a função tr passando o vetor transp;
}
void texto(){
  cout<<"\nTestando Função\n";
}

void soma(int a,int b){
  cout<<"Soma dos valores: "<<a+b<<"\n";
}

int soma2(int a,int b){
  return a+b;
}

void tr(string tra[4]){
  for(int i = 0; i<4; i++){
    cout<<tra[i]<<"\n";
  }
}
