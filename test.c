#include<stdio.h>
int main(){
int arr[5];
// FOR INPUTTING
for(int j = 0;j <= sizeof(arr)/4 -1;j++){
	printf("Enter value %d \n",j +1); 
	scanf("%d",&arr[j]);
}
// FOR DISPLAYING
for(int i = 0;i <= sizeof(arr) / 4 - 1;i++){
	printf("%d ", arr[i]);
}

return 0;
}
