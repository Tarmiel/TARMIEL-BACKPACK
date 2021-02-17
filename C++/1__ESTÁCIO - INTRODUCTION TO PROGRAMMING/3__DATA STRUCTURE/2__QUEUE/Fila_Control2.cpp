#include <iostream>
#include<queue>
#include<windows.h>
#include<ctype.h>
using namespace std;
main(){
  int tam,el,del,x=0;
  cout<<"\nDigite o tamanho da fila -> ";cin>>tam;
  queue<int> fila;
  cout<<"\n";

  for(int x=0;x<tam;x++){
    cout<<"\t\tDigite o elemento da posicao "<<x+1<<" da fila -> ";cin>>el;
    fila.push(el);
  }

  cout<<"\nTransferindo fila pro vetor...";
  int v[tam];
  for(int x=0;x<tam;x++){
    v[x] = fila.front();
    fila.pop();
  }

  Sleep(3000);
  cout<<"\nChecando tamanho da fila -> "<<fila.size()<<"\n";

  for(int x=0;x<tam;x++){
    cout<<"\nV["<<x<<"]/posicao "<<x+1<<" = "<<v[x];
  }

  cout<<"\n\nQual elemento gostaria de remover da fila?(posicao) -> ";cin>>del;
  while(del<=0 || del>tam){
    cout<<"Erro,tente novamente. -> ";cin>>del;
  }

  cout<<"\nRemovendo...";
  for(int x=0;x<tam;x++){
    if(x!=del-1){
      fila.push(v[x]);
    }
  }

  for(int x=0;x<tam-1;x++){
    v[x] = fila.front();
    fila.pop();
  }

  Sleep(3000);
  cout<<"\n\nPronto! -> ";

  for(int x=0;x<tam-1;x++){
    cout<<"\nV["<<x<<"]/posicao "<<x+1<<" = "<<v[x];
  }
  cout<<"\n\n\n";

}
