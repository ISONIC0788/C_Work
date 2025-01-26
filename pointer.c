#include <stdio.h>
int main(){
	int number = 40;
	int* ptr = &number;
	printf("%p\n",*ptr);
	
	printf("%d\n",*ptr);
	
	printf("%p",ptr);
	return 0;
}
