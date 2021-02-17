#include<iostream>
#include<stack>
using namespace std;
main(){
  int tam,arm;
  stack <int> pi;

  cout<<"Tamanho da pilha: ";cin>>tam;

  for(int x=0;x<tam;x++){
      cout<<"Elemento da posicao "<<x+1<<" da pilha -> ";cin>>arm;
      pi.push(arm);
  }

  cout<<"\nTamanho da Pilha: "<<pi.size()<<"\n";
  int m[pi.size()][pi.size()];

  for(int x=0;x<tam;x++){
    for(int y=0;y<tam;y++){
      m[x][y]=pi.top();
      pi.pop();
      cout<<"\nM["<<x<<"]["<<y<<"]= "<<m[x][y];
    }
  }
}
