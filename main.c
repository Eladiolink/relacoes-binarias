#include <stdio.h>
#include "headers/relations.h"

int main(void){
    
    int c[2] = {4,2};

    classeDeEquivalencia(c);
   
    int a[2]={1,1};
    int b[2]={2,3};
    mesmaClasseDeEquivalencia(a, b);

    espacoQuociente();

    int par[4][2] = {{4,2} , {2,1}};

    umaClasseDeEquivalencia(par, 2);

    return 0;
}