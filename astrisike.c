#include <stdio.h>

int main(){
for (int i = 0 ; i<= 5; i ++){
	    // for space 
		for (int g = 1 ; g<=5-i;g++){
		  printf(" ");	
		}
		// for star 
		for (int str = 1 ; str <=i*2-1;str++){
			 printf("*");	
		}
		
		printf("\n");	
	}

	return 0;
}