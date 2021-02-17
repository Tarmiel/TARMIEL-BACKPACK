#include<iostream>
#include<windows.h>
#include<list>
using namespace std;
main(){
  list<int> Lista;
  list<int> Lista2;
  list<int>::iterator it;


  for(int x=0;x<10;x++){
    Lista.push_front(x);
  }
  for(int y=10;y<20;y++){
    Lista2.push_front(y);
  }

  cout<<"Tamanho da lista 1.0 = "<<Lista.size();

  //adicionando elemento da posição escolhida
  it=Lista.begin();
  advance(it,4);
  Lista.insert(it,50);

  cout<<"\nTamanho da lista 2.0 = "<<Lista.size();
  cout<<"\n\n";

  for(int x=0;x<11;x++){
    cout<<Lista.front() <<"\n";
    Lista.pop_front();
  }

  cout<<"\n\n\n";

  //........................
  for(int x=0;x<10;x++){
    Lista.push_front(x);
  }

  //Remove elemento da posição escolhida
  it=Lista.begin();
  advance(it,4);
  Lista.erase(--it);

  // Lista.reverse();
  for(int x=0;x<9;x++){
    cout<<Lista.front() <<"\n";
    Lista.pop_front();
  }

  cout<<"\n\n\n";
  for(int x=0;x<10;x++){
    Lista.push_front(x);
  }

  cout<<"\nTamanho = "<<Lista.size()<<"\n";

  //Remove todos os elementos
  // Lista.clear();
  // cout<<"\nTamanho 2.0 = "<<Lista.size()<<"\n";

  //Passa os elementos de uma lista para outra
  Lista.merge(Lista2);
  cout<<"\nTamanho 3.0 = "<<Lista.size()<<"\n";
  int tam = Lista.size();

  for(int x=0;x<tam;x++){
    cout<<"\n"<<Lista.front();
    Lista.pop_front();
  }
}
