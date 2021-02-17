#include <iostream>
#include <queue>

using namespace std;
int main(){

  queue <string> cartas;

  cartas.push("Valete");
  cartas.push("Rei de Copas");
  cartas.push("Rei de Espadas");
  cartas.push("Rei de Ouros");
  cartas.push("Rei de Paus");

  cout<<"Tamanho da fila = "<<cartas.size()<<"\n";
  cout<<"Primeira carta da fila = "<<cartas.front()<<"\n";
  cout<<"Ultima carta da fila = "<<cartas.back()<<"\n\n";

  while(!cartas.empty()){
    cout<<"Primeira carta da fila = "<<cartas.front()<<"\n";
    cartas.pop();
  }


}
