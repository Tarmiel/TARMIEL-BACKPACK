#include<iostream>
#include<string>

using namespace std;
main(){
  string Palavra;
  string invertido;

  cout<<"Palavra = ";//getline(cin, Palavra);
  cin>>Palavra;
  for(int x = Palavra.size()-1; x>=0;x--){
    invertido += Palavra.at(x);
  }
  cout<<"\t"<<invertido;

}
