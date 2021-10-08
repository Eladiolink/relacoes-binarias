#include <stdio.h>
#include "headers/relations.h"

int main(void){

    classeDeEquivalencia(4,2);

    int a[2] = {1,2};
    int b[2] = {1,2};

    mesmaClasseDeEquivalencia(a, b);

    espacoQuociente();

    return 0;
}