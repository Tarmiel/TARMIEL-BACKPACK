#include <iostream>
#include <list>

using namespace std;
int main(){
  list <int> aula;
  int tam;

  aula.push_front(9);
  aula.push_front(13);
  aula.push_front(10);
  aula.push_front(3);
  aula.push_front(5);
  aula.push_front(1);
  aula.push_front(33);
  aula.push_front(2);
  aula.push_front(4);
  aula.push_front(7);

  aula.sort();
  //aula.reverse();

  cout<<"Tamanho da Lista = "<<aula.size()<<"\n";
  tam = aula.size();
    for(int x = 0;x<tam;x++){
      cout<<aula.front()<<"\n";
      aula.pop_front();
    }
}
