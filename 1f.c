#include <stdio.h>

int main(void){

    int A[4] = {1, 2, 3, 4}, X, Y, k;
    
    scanf("%d %d", &X, &Y);
    
    for(int x = 0; x < 4; x++){

    	for(k = 0; k < 4; k++){

			if(X * A[k] == Y * A[x]){
				printf("(%d,%d)\n",A[x],A[k]);
		}
    }
	return 0;
}