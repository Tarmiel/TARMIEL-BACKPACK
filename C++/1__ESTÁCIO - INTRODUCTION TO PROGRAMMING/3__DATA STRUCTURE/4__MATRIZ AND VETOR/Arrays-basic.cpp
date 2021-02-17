#include<iostream>
using namespace std;
int main(){
/*  int v[5],a=0,b,c;

  cout<<"Array - Vetores\n";
  while (a<=4) {
    cout<<"Digite o valor desejado para a posicao V["<<a<<"]= ";
    cin>> v[a];
    a++;
  }
  	cout<<"\nExibir o Vetor em ordem Crescente.\n";
  		for(b=0;b<=4;b++){
    	cout<<"V["<<b<<"]="<<v[b]<<"\n";
  		}
  	cout<<"\nExibir o Vetor em ordem Decrescente.\n";
  		for(b=4;b>=0;b--){
  		cout<<"V["<<b<<"]="<<v[b]<<"\n";
		}
*/
	int m[2][2],a,c,l;
	cout<<"Array - Matriz\n";
		for(c=0;c<=1;c++){
			for(l=0;l<=1;l++){
				cout<<"Valor para >> M["<<c<<"]["<<l<<"]= ";
				cin>> m[c][l];
			}
		}
		//exibir
		cout<<"\n";
		for(c=0;c<=1;c++){
			for(l=0;l<=1;l++){
				cout<<"["<<c<<"]["<<l<<"] = "<<m[c][l]<<"\n";
			}
		}
}
