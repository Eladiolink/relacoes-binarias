#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A[4] = {1, 2, 3, 4};
    int X, Y;
    
    scanf("%d %d", &X, &Y);

	printf("\n");
    
    for( int i = 0 ; i<4 ; i++ ){
    	for( int k = 0 ; k<4 ; k++ ){ 
    	    if( X * A[k] == Y * A[i] ){
    	    	printf("(%d,%d)\n", A[i], A[k]);
    	    }
    	}
    }

	printf("\n\n");
	
	return 0;
}