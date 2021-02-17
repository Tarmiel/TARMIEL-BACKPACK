#include<iostream>
#include <cstdlib>
using namespace std;

main(){
	int  aux1 = 2, aux2 = 1, idade, idadeMaior = 0, media, total1 = 0, total2 = 0;
	int sexo;
	int cor1,cor2;


	cout<<"Sexo >> Feminino = 10, Masculino = 20\nCor dos Olhos >> Azuis = 11, Verdes = 22, Castanhos = 33\nCor dos Cabelos >> Louros = 44, Castanhos = 55, Pretos = 66\n\n";
	while(aux1 > aux2){
	cout<<"\n";
	cout<<"Idade:";cin>>idade;

		if(idade == -1){
			aux2 = aux2 + 2;//Para sair do Loop
		}
		if(idadeMaior < idade){
			idadeMaior = idade;
		}
		if(idade > 0){
			cout<<"Sexo:";cin>>sexo;
			cout<<"Cor dos olhos:";cin>>cor1;
			cout<<"Cor dos cabelos:";cin>>cor2;
		}
		if(idade >= 10){
			total1 = total1 + 1;//Contabilizar o total de Loops
		}
		if(idade >= 18 && idade <= 35 && sexo == 10 && cor1 == 22 && cor2 == 66){
			total2 = total2 + 1;
		}
	}
	media =  (total2*100)/total1;
	system("cls");
	cout<<"Maior idade: "<<idadeMaior<<".";
	cout<<"\nTotal de pessoas pesquisadas: "<<total1<<"\n";
	cout<<"\nDo total de pessoas pesquisadas, "<<media<<"% tem a idade entre 18 e 35,olhos verdes e cabelo preto.";

}
