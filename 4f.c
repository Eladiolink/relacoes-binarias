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
     int num = 0;
     int aux = 1;

     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
         AA[num][0] =A[i];
         AA[num][1] =A[j];
         AA[num][2] = 1;
         num++;      
        }
     }
    
    for(int s=0;s<16;s++){
        if(AA[s][2]==1){
            printf("{");
        }
       
        for(int m=0;m<16;m++){   
			if(AA[s][0] * AA[m][1] == AA[s][1] * AA[m][0] && AA[m][2]==1){
				printf("(%d,%d)",AA[m][0],AA[m][1]);
                AA[m][2] = 0;
                aux = 1;
                
		    }
        }

        if(aux == 1){
            printf("}");
            printf("\n");
            aux = 0;
        }
       
    }
     
}


void funcionalidadeQuatroCarlucio(void){
     int A[4] = {1, 2, 3, 4};
     int AA[16][3];
     int num = 0;
     int aux = 1;
     int vezes = 1;

     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
         AA[num][0] =A[i];
         AA[num][1] =A[j];
         AA[num][2] = 1;
         num++;      
        }
     }
    
    for(int s=0;s<16;s++){
        if(AA[s][2]==1){
            printf("{");
        }
       
        for(int m=0;m<16;m++){   
			if(AA[s][0] * AA[m][1] == AA[s][1] * AA[m][0] && AA[m][2]==1){
				if(vezes==1){ 
                     printf(" (%d,%d) ",AA[m][0],AA[m][1]);
                     vezes++;
                }
               
                AA[m][2] = 0;
                aux = 1;
                
		    }
        }

        if(aux == 1){
            printf("}");
            printf("\n");
            aux = 0;
            vezes=1;
        }
    }    
}
