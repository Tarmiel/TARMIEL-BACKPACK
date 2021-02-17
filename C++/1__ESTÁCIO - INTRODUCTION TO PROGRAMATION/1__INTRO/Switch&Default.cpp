#include<iostream>
#include <cstdlib>
#include<stdlib.h>
#include<ctype.h> //biblioteca ctype.h contém funções e macros para manipulação de caracteres.

using namespace std;


reiniciar(){
  char opc;
  cout<<"Deseja reiniciar o programa? [S/N]\n";cin>>opc;
  opc = toupper(opc); //deixa a letra maiúscula

  switch(opc){

    case 'S':
      system("cls");
      reiniciar();

    case 'N':
      return 0;

    default:
      cout<<"\aOpcao Invalida!";
      reiniciar();
  }
}
