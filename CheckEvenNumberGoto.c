 #include<stdio.h>
int main(){
	int num;
	printf("||Enter the number:\n");
	scanf("%d",&num);
	if(num%2==0)
	   goto even ;
	else
	   goto odd ;
even:
	printf("The number is even ");
	return 0;
	
odd:
	printf("The number is odd ");
	
	
	return 0;
}