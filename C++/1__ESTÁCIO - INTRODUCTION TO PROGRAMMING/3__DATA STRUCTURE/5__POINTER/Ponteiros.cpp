#include <iostream>
using namespace std;

main(){
  int a,b, m[4][4];
  int *p;

  //recebendo
  a = 0;
  while(a<4){
    b = 0;
    while(b<4){
      cout<<"Matriz["<<a<<"]["<<b<<"]= ";cin>>m[a][b];
    b++;
    }
  a++;
  }

  cout<<"\n\n";

  //mostrando
  a = 0;
  while(a<4){
    b = 0;
    while(b<4){
      cout<<"Matriz["<<a<<"]["<<b<<"]= "<<m[a][b];
      p = &m[a][b];
      cout<<"\t";
      cout<<"Posicao da memoria = "<<p<<"\n";
    b++;
    }
  a++;
  cout<<"\n";
  }

}
