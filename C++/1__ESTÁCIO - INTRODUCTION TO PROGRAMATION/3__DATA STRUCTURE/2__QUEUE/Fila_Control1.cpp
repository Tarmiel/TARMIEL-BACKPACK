#include <iostream>
#include<queue>
#include<windows.h>
using namespace std;
main(){
  int tam,el;
  cout<<"\nDigite o tamanho da fila -> ";cin>>tam;
  queue<int> fila;

  for(int x=0;x<tam;x++){
    cout<<"\t\tDigite o elemento da posicao "<<x+1<<" da fila -> ";cin>>el;
    fila.push(el);
  }

  int v[tam];
  for(int x=0;x<tam;x++){
    v[x] = fila.front();
    fila.pop();
  }
  cout<<"\nTransferindo fila pro vetor...";
  Sleep(3000);
  cout<<"\nChecando tamanho da fila -> "<<fila.size()<<"\n";

  int newEl,pos;
  cout<<"\n\nDigite em que posicao da fila o elemento novo deve ser inserido -> ";cin>>pos;
  cout<<"\nDigite o elemento a ser inserido na posicao "<<pos<<" da fila -> ";cin>>newEl;

  for(int x=0;x<tam;x++){
    if(x<pos-1){
      fila.push(v[x]);
    }
    if(x==pos-1){
      fila.push(newEl);
      fila.push(v[x]);
    }
    if(x==pos){
      fila.push(v[x]);
    }
    if(x>pos){
      fila.push(v[x]);
    }
  }
  cout<<"\nChecando Fila...";
  Sleep(3000);
  cout<<"\nPronto -> ";

  cout<<"\nTamanho da fila -> "<<fila.size()<<"\n\n";
  int tamFil = fila.size();
  for(int x=0;x<tamFil;x++){
    cout<<"\t"<<fila.front();
    fila.pop();
  }

  //DESCARTADO
  /*int newTam = fila.size();
  int vetorRecebe[fila.size()-1];
  for(int x=0;x<=fila.size();x++){
    vetorRecebe[x] = fila.front();
    fila.pop();
  }
  for(int x=0;x<newTam;x++){
    cout<<"\nV["<<x<<"]= "<<vetorRecebe[x];
  }*/
  cout<<"\n\n\n\n";
}
