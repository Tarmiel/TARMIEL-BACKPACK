#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

main(){

    int v[5],x, aux, y;
    cout <<"digite os 5 elementos do vetor\n";
    x=0;
    while(x<5){
        cin >>v[x];
        x++;
    }

    //ordenaÃ§Ã£o insert sort
    cout <<"vetor ordenado\n";
    for(y=0;y<5;y++){
        for(x=0;x<5;x++){
            if(v[x]>v[x+1]){
                aux = v[x];
                v[x] = v[x+1];
                v[x+1] = aux;
            }
        }
    }
    for(x=0;x<5;x++)
    cout <<v[x]<<"\n";
}
