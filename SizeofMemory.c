#include<stdio.h>
int main(){
	// to get memory size is 
	int myInt ;
	printf("%lu\n",sizeof(myInt));
	
	int number[] = {23,45,56,78,34};
	printf("%lu",sizeof(number));
	
	printf("\nThe pointer of an array is %p",&number[0]);
	printf("\nThe pointer of an array is %d",&number);
	return 0;
}
