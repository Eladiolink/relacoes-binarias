#include <stdio.h>

void funcionalidadeTres(int *primeiroParOrdenado, int *segundoParOrdenado);

int main(void){
    
    int primeiroParOrdenado[2];
    int segundoParOrdenado[2];
    
    for(int i=0;i<2;i++) {
            
        if(i==0){
            printf("Informe o %d e o %d termo do %d par ordenado: ",(i+1),(i+2),(i+1));
                scanf("%d %d", &primeiroParOrdenado[i], &primeiroParOrdenado[i+1]);
        }else{
            printf("Informe o %d e o %d termo do %d par ordenado: ",(i),(i+1),(i+2));
                scanf("%d %d", &segundoParOrdenado[i-1], &segundoParOrdenado[i]);
        }
    }
   
    funcionalidadeTres( primeiroParOrdenado, segundoParOrdenado);

    return 0;
}

void funcionalidadeTres(int *primeiroParOrdenado, int *segundoParOrdenado){

    if( primeiroParOrdenado[0]*segundoParOrdenado[1] == primeiroParOrdenado[1] * segundoParOrdenado[0] ){
        printf("true\n");
    }else{
        printf("false\n");
    }

}