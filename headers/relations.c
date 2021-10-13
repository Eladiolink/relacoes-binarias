#include "relations.h"
#include <stdio.h>

void classeDeEquivalencia(int *parOrdenado){
    int A[4] = {1, 2, 3, 4}, k;
    printf("Classe de Equivalencia de (%i,%i): \n", parOrdenado[0], parOrdenado[1]);
    for(int x = 0; x < 4; x++){

    	for(k = 0; k < 4; k++){

			if(parOrdenado[0] * A[k] == parOrdenado[1] * A[x]){
				printf("(%d,%d)\n", A[x], A[k]);
		    }
    	}
    }

	printf("\n\n");
}

int * umaClasseDeEquivalencia(int parOdenado[][2], int tamanho){
    
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

void mesmaClasseDeEquivalencia(int *primeiroParOrdenado, int *segundoParOrdenado){
    
    printf("(%i, %i) e (%i, %i) pertencem a mesma classe de equivalencia? \n", primeiroParOrdenado[0],primeiroParOrdenado[1],segundoParOrdenado[0],segundoParOrdenado[1]);

    if( primeiroParOrdenado[0] * segundoParOrdenado[1] == primeiroParOrdenado[1] * segundoParOrdenado[0] ){
        printf("True\n");
    
    }else{
        printf("False\n");
    }
}

void espacoQuociente(void){
    int A[4] = {1, 2, 3, 4};
    int AA[16][3];
    int num = 0, i, k;
    int aux = 1, vezes = 1;

    for(i = 0 ; i<4 ; i++){
        for(k = 0 ; k<4 ; k++){
            AA[num][0] = A[i];
            AA[num][1] = A[k];
            AA[num][2] = 1;
            num++;
        }
    }

    printf("\nEspaco Quociente: {\n");

    for(i = 0 ; i<16 ; i++){
        if(AA[i][2] == 1){
            printf("{");
        }

        for(k = 0 ; k<16 ; k++){

			if(AA[i][0] * AA[k][1] == AA[i][1] * AA[k][0] && AA[k][2] == 1){

				if(vezes == 1){
                    printf(" (%d,%d) ", AA[k][0], AA[k][1]);
                    vezes++;
                }

                AA[k][2] = 0;
                aux = 1;
		    }
        }

        if(aux == 1){
            printf("},");
            printf("\n");
            
            aux = 0;
            vezes = 1;
        }
    }

    printf("}\n\n");
}