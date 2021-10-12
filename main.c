#include <stdio.h>
#include "headers/relations.h"

int main(void){
    
    int c[2] = {4,2};

    classeDeEquivalencia(c);

    int a[2] = {1,2};
    int b[2] = {1,2};

    mesmaClasseDeEquivalencia(a, b);

    espacoQuociente();

    return 0;
}