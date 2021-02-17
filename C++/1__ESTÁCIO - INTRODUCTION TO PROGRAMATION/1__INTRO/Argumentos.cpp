#include<iostream>
using namespace std;

void imp(string txt="Lucas");
int main(int argc, char const *argv[]) {
  
  cout<<argv[0]<<"\n\n";

  imp();
  return 0;
}

void imp(string txt){
  cout<<"\n"<<txt<<"\n";
}
