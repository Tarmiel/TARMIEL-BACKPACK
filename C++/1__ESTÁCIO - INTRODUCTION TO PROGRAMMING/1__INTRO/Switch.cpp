#include <iostream>
#include <cstdlib>
using namespace std;

int main();
reiniciar(){
  main();
}

main(){
    int a, b, c, operacao;
    cout <<"Digite o 1o valor: ";
    cin >> a;
    cin.ignore (); //coloca uma especie de limite por ENTER, (10) => 10 ENTER
    cout <<"Digite o 2o valor: ";
    cin >> b;
    cin.ignore ();
    cout <<"Que operacao deseja realizar?\n\1. Adicao\t2.Subtracao\t3.Multiplicacao\t4.Divisao\n\n=>";
    cin >> operacao;
    cin.ignore ();
    system ("cls");
    switch (operacao){
        case 1:
            c=a+b;
            cout <<a<<" + "<<b<<" = "<<c<<"\n\n";
            break;
        case 2:
            c=a-b;
            cout <<a<<" - "<<b<<" = "<<c<<"\n\n";
            break;
        case 3:
            c=a*b;
            cout <<a<<" * "<<b<<" = "<<c<<"\n\n";
            break;
        case 4:
            c=a/b;
            cout <<a<<" / "<<b<<" = "<<c<<"\n\n";
            break;
        default:
          cout<<"Tente Novamente...\n";
          main();
    }
    system ("pause");
    return EXIT_SUCCESS;
}
