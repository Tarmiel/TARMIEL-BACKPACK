#include<iostream>
#include<stack>
using namespace std;
main(){
  stack <int> pi;
  int tam;

  cout<<"Tamanho da pilha: ";cin>>tam;
  int arm[tam];

  cout<<"\n";

  for(int i=0;i<tam;i++){
    cout<<"Posicao "<<i+1<<" da pilha: ";cin>>arm[i];
  }//colocando num vetor para depois passar para a pilha//teste
  for(int i=0;i<tam;i++){
    pi.push(arm[i]);
  }

  cout<<"\nTamanho da pilha: "<<pi.size()<<"\n";
  for(int i=0;i<tam;i++){
    cout<<"\nV["<<i<<"]="<<pi.top();
    pi.pop();
  }

  cout<<"\n\nNovo tamanho da pilha: "<<pi.size();
}
