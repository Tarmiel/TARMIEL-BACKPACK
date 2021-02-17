#include <iostream>
#include <stack>
#include <list>
//PROGRAMA FULL LOCO,APENAS PARA TESTES
using namespace std;
int main(){
  stack <string> cartas;
  cartas.push("A");
  cartas.push("H");
  cartas.push("F");
  cartas.push("D");
  cartas.push("C");

  cout<<"Tamanho pilha = "<<cartas.size();
  int tam = cartas.size();
  string v[tam];

  for(int x = 0;x<tam;x++){
    v[x] = cartas.top();
    cartas.pop();
  }
  for(int x=0;x<tam;x++){
    cout<<"\n"<<v[x];
  }
  cout<<"\n---------------PASSANDO VETOR PARA A LISTA-------------------";

  list<string> lista;
  for(int x = 0;x<tam;x++){
    lista.push_front(v[x]);
  }
  cout<<"\n\nTamanho da Lista = "<<lista.size();
  lista.sort();
  //lista.reverse();
  cout<<"\n---------------ORDENANDO LISTA-------------------------------";
  cout<<"\n\n-------------PASSANDO LISTA ORDENADA PRO VETOR-------------";
  for(int x = 0;x<tam;x++){
    v[x] = lista.front();
    lista.pop_front();
  }
  cout<<"\n\n-------------MOSTRANDO VETOR-------------------------------";
  for(int x = 0;x<tam;x++){
    cout<<"\n"<<v[x];
  }
  cout<<"\n\n\n";
}
