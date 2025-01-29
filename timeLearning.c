#include<stdio.h>
#include<time.h>
int main(){
	time_t t;
	struct tm *tme;
	time(&t);
	tme = localtime(&t);
	  printf("Current Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n",
           tme->tm_mday, tme->tm_mon + 1, tme->tm_year + 1900,
           tme->tm_hour, tme->tm_min, tme->tm_sec);
	return 0;
}
