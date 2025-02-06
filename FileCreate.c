 #include <stdio.h>
int main(){
	// craetion of fiel 
	FILE *fptr;
	fptr = fopen("ebedi.txt", "w");
	
	//m
	fprintf(fptr,"some txt");
	
	fclose(fptr);
	return 0;
}