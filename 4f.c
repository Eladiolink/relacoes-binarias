#include <stdio.h>

void funcionalidadeQuatro(void);
void funcionalidadeQuatroCarlucio(void);

int main(void){
    
    //funcionalidadeQuatro();
    funcionalidadeQuatroCarlucio();

    return 0;
}

void funcionalidadeQuatro(void){
     int A[4] = {1, 2, 3, 4};
     int AA[16][3];
     int num = 0, i, k;
     int aux = 1;

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
       
        for(int k = 0 ; k<16 ; k++){   
			if(AA[i][0] * AA[k][1] == AA[i][1] * AA[k][0] && AA[k][2] == 1){
				printf("(%d,%d)", AA[k][0], AA[k][1]);
                AA[k][2] = 0;
                aux = 1;
		    }
        }

        if(aux == 1){
            printf("},");
            printf("\n");
            aux = 0;
        }
    }

    printf("}\n\n"); 
}

void funcionalidadeQuatroCarlucio(void){
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