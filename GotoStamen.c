//#include <stdio.h>
//
//int main() {
//    int n = 0;  
//
//    // If the number is zero, jump to
//      // jump_here label
//    if (n == 0)
//        goto jump_here;
//
//    // This will be skipped
//    printf("You entered: %d\n", n);
//
//jump_here:
//    printf("Exiting the program.\n");
//    return 0;
//}



#include<stdio.h>
int main(){
	int n = 0 ;
	
	if(n == 0)
	   goto jump_here;
jump_here:
	printf("The program has terminated ");
	return 0;
}
