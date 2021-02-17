#include <iostream>
#include <stack>

using namespace std;
int main() {

  stack <string> cartas;
// cria   tipo    nome

//nome.push("") para adicionar elementos a pilha
  cartas.push("Valete");
  cartas.push("Rei de Copas");
  cartas.push("Rei de Espadas");
  cartas.push("Rei de Ouros");
  cartas.push("Rei de Paus");

  cout<<"Tamanho da Pilha = "<<cartas.size();

//nome.top() mostra o elemento do topo
  cout<<"\nElemento do topo = "<<cartas.top();

//nome.pop() retira o elemento do topo da pilha
  cartas.pop();

  cout<<"\nElemento do topo = "<<cartas.top();

//empty verifica se a pilha está vazia(podendo usar o size()==0 para verificar tbm)
  if(cartas.empty()){
    cout<<"\nPilha vazia";
  }else{
    cout<<"\nPilha com elementos";
  }

//remove elementos até que a pilha esteja zerada
  while(!cartas.empty()){
    cartas.pop();
    cout<<"\n"<<cartas.top();
  }

  return 0;
}
