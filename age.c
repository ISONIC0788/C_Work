#include<stdio.h>
int main(){
	int physics;
	int math;
	int History;
  int average;
	scanf("%d",&physics);
scanf("%d",&math);
scanf("%d",&History);
average = (physics+math+History)/3;
if(average<=100 && average>=90){
	printf("Average: %d \nGrade A",average);
} 
else if(average<=89 && average>=70){
	printf("Average: %d \nGrade B",average);
} 
else if(average<=69 && average>=50){
	printf("Average: %d \nGrade C",average);
}

	return 0;
}