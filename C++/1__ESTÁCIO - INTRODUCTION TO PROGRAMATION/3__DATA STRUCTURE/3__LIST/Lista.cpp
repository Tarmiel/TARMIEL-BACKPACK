#include <iostream>
#include <list>

using namespace std;
int main(){
  list<int> aula;
//inicia tipo nome (posicoes,tamanho)
  int tam;

  list<int>::iterator it; //Iterator para inserir um elemento na posicao X
//list tipo iterator nome

  cout<<"Tamanho da lista? = ";cin>>tam; //Ex:inicia 10;
  for(int x = 0; x<tam ;x++){
    aula.push_front (x);
  }

//Controle do Iterator
  it=aula.begin();
  advance(it,6); // inserir o elemento X na posicao 5
  aula.insert(it,15);

//apos inserir +1 o tamanho = 11
  cout<<"Tamanho da Lista = "<<aula.size()<<"\n";

  tam = aula.size();
    for(int x = 0;x<tam;x++){
      cout<<aula.front()<<"\n";
      aula.pop_front();
    }
}
