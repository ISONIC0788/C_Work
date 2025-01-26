#include<stdio.h>
struct myStructure{
	int myNum;
	char myLettre;
};
int main(){
    struct myStructure s1;
    s1.myNum = 23;
    s1.myLettre = 'c';
    printf("%d\n",s1.myNum);
    printf("%c\n",s1.myLettre);
	return 0;
}
