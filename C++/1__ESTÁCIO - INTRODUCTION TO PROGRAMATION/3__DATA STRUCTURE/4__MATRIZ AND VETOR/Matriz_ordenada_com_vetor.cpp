#include <iostream>
using namespace std;

main(){
  int c,l,coluna,linha,n,aux;
  cout<<"Linha - Tamanho = ";cin>>linha;
  cout<<"Coluna - Tamanho = ";cin>>coluna;

  int m[linha][coluna];
  int tamanho = linha*coluna;
  l = 0;
  while(l<linha){
    c = 0;
    while(c<coluna){
      cout<<"M["<<l<<"]["<<c<<"]=";cin>>m[l][c];
      c++;
    }
  l++;
  }

  cout <<"\nPassando a Matriz para o Vetor";
  int v[tamanho];
  n = 0;
  for(l = 0;l<linha;l++){
    for(c = 0;c<coluna;c++){
      v[n] = m[l][c];
      n++;
    }
  }

  cout <<"\nOrdenando Vetor";
  for(l = 0; l<tamanho ;l++){
      for(n = 0;n <tamanho ;n++){
          if(v[n]>v[n+1]){
              aux = v[n];
              v[n] = v[n+1];
              v[n+1] = aux;
          }
      }
  }

  cout<<"\nMostrando o Vetor Ordenado.\t";
  for(n = 0; n<tamanho ;n++){
    cout<<v[n]<<"\t";
  }
  cout<<"\n\n";
}
