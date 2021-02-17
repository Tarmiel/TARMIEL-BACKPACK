#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

regula(int y){
    y = (y*32)+6;
    return y;
}

main(){
    int a=0;
    float vetor[10];
    float *p;

    while(a<10){
        vetor[a]= regula(a);
        cout <<"vetor["<<a<<"]="<<vetor[a]<<"\t";
        p = &vetor[a];
        cout<<"posicao de memoria="<<p<<"\n";
        a++;
    }
}
