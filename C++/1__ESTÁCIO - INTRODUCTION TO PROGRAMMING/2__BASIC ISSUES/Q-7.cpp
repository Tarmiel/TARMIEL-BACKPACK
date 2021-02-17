/* Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade. Para cada casa visitada foi
fornecido o número do canal (2, 4, 6, 7, 9, 13) e o número de pessoas que estavam assistindo a ele naquela casa.

Fazer um programa que:

•	leia um número indeterminado de dados, sendo que canal 0 (zero) representa fim da entrada de dados;

•	calcule a percentagem de audiência para cada emissora;

•	imprima total de pessoas pesquisadas, total de pessoas por canal e sua respectiva percentagem. */

#include<iostream>
#include <cstdlib>

using namespace std;

int main(void);
reiniciar(){
  main();
}

main(){
int canalt,canal2,canal4,canal6,canal7,canal9,canal13;
int s2 = 0,s4 = 0,s6 = 0,s7 = 0,s9 = 0,s13 = 0,total = 0;

int y = 1;
int x = 0;

while(y!=x){
  cout<<"Canal >> ";cin>>canalt;
  if(canalt==0){
    x++;
  }

  if(canalt==2){
    cout<<"2(): ";cin>>canal2;
    s2 = s2 + canal2;
  }

  if(canalt==4){
    cout<<"4(): ";cin>>canal4;
    s4 = s4 + canal4;
  }

  if(canalt==6){
    cout<<"6(): ";cin>>canal6;
    s6 = s6 + canal6;
  }

  if(canalt==7){
    cout<<"7(): ";cin>>canal7;

    s7 = s7 + canal7;
  }

  if(canalt==9){
    cout<<"9(): ";cin>>canal9;
    s9 = s9 + canal9;
  }

  if(canalt==13){
    cout<<"13(): ";cin>>canal13;
    s13 = s13 + canal13;
  }

  if(canalt!=2 && canalt!=4 && canalt!= 6 && canalt!=7 && canalt!=9 && canalt!=13 && canalt!=0){
    system("cls");
    cout<<"Canal Invalido..Tente Novamente\n";
    reiniciar();
  }
}

total = s2 + s4 + s6 + s7 + s9 + s13;
float porcen2 = (s2*100)/total, porcen4 = (s4*100)/total, porcen6 = (s6*100)/total, porcen7 = (s7*100)/total, porcen9 = (s9*100)/total, porcen13 = (s13*100)/total;

system("cls");
cout<<"Total de pessoas Pesquisadas: "<<total;
cout<<"Total de pessoas em cada canal: "
<<"\nAssistem ao canal 2: "<<s2
<<"\nAssistem ao canal 4: "<<s4
<<"\nAssistem ao canal 6: "<<s6
<<"\nAssistem ao canal 7: "<<s7
<<"\nAssistem ao canal 9: "<<s9
<<"\nAssistem ao canal 13: "<<s13;


cout<<"\n\nDo total de pessoas pesquisadas:\n"
<<"Assistem ao canal 2: "<<porcen2<<"%.\n"
<<"Assistem ao canal 4: "<<porcen4<<"%.\n"
<<"Assistem ao canal 6: "<<porcen6<<"%.\n"
<<"Assistem ao canal 7: "<<porcen7<<"%.\n"
<<"Assistem ao canal 9: "<<porcen9<<"%.\n"
<<"Assistem ao canal 13: "<<porcen13<<"%.\n";


return 0;
}
