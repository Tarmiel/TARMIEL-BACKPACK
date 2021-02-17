#include<iostream>
#include<queue>
#include <windows.h>
using namespace std;

inverte(int qtd,queue<int> filaTeste){
  int v[qtd];
  cout<<"\n...Invertendo Vetor e empilhando os elementos...\n";
  Sleep(5000);

  while(filaTeste.size()>0){
    v[filaTeste.size()-1] = filaTeste.front();
    filaTeste.pop();
  }
  cout<<"\nVetor Invertido...Resultado ->\n";
  for(int x=0;x<qtd;x++){
    cout<<"V["<<x<<"]= "<<v[x];
    cout<<"\n";
  }
}

buscador(int qtdBus,queue<int> filaBusca){
  int v[qtdBus];
  for(int x=0;x<qtdBus;x++){
    v[x] = filaBusca.front();
    filaBusca.pop();
  }
  int y,c=0;
  cout<<"\nDigite um elemento para buscar o numero de vezes que ele apareceu ->";cin>>y;
  cout<<"\nBuscando...\n";
  Sleep(5000);
  cout<<"Pronto...\n";

  for(int x=0;x<qtdBus;x++){
    if(v[x]==y){
      c++;
    }
  }
  cout<<"\n-->> "<<c<<"\n";
}

main(){
  queue <int> Teste;
  int qtde,elm;
  cout<<"Quantidade de elementos?-> ";cin>>qtde;
  cout<<"\n";
  for(int x=0;x<qtde;x++){
    cout<<"Elemento -> ";cin>>elm;
    Teste.push(elm);
  }
  cout<<"Tamanho da Fila -> "<<Teste.size()<<"\n";
  inverte(qtde,Teste);
  buscador(qtde,Teste);

  char recebe;
  cout<<"\nDeseja repetir o processo? S/N --> ";cin>>recebe;
  if(recebe=='S' || 's'){
    system("cls");
    main();
  }else{
    return 0;
  }
}
