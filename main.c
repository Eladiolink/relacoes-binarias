#include <stdio.h>
#include "headers/relations.h"

int *funcionalidadeDois(int parOdenado[][2], int tamanho);

typedef struct
{
    int x;
    int y;
} par;

int main(void){
    
    int c[2] = {4,2};

    classeDeEquivalencia(c);

    //mesmaClasseDeEquivalencia(a, b);

    // espacoQuociente();
    int par[4][2] = {{4,2} , {2,1}};

    funcionalidadeDois(par, 4);

    return 0;
}

int *funcionalidadeDois(int parOdenado[][2], int tamanho){
    
    printf("São uma classe de equivalencia? \n");
    int class[tamanho];

    for (int a = 0; a < tamanho; a++){
        int classe = 0;
        for (int b = 0; b < tamanho; b++){
            if (parOdenado[a][0] * parOdenado[b][1] != parOdenado[b][0] * parOdenado[a][1]){
                classe = 1;
            }
        }

        if (classe == 0){
            class[a] = 1;
        }
        else{
            class[a] = 0;
        }  
    }

    for(int a=0;a<tamanho;a++){
        if(class[a]==0){
        printf("False\n");
        return 0;
        }
    }
        printf("True\n");
}