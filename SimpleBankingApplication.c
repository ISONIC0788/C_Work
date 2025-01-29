#include<stdio.h>
#include <stdlib.h>
#include <time.h>
struct myaddress{
	char *district  ;
	char *sector  ;
	char *cell ;
	char village[30] ;
	
};
struct Customer {
	char *name;
	char *sex;
	int age;
	char *telnumber;
	char *email ;
	long long int AccountNumber;
};

// time decration
 
// printf("Transaction Date and time: %02d-%02d-%04d %02d:%02d:%02d\n",tme->tm_mday, tme->tm_mon + 1, tme->tm_year + 1900,
//           tme->tm_hour, tme->tm_min, tme->tm_sec) ;
//time 

void DisplayCustomerinformation(){
//	char *name = "EbediMeleck";
//	char *sex = "Male";
//	int age = 28;
//	char *telnumber ="(+250) 734772160" ;
//	char *email =": niyojohnpeter01@gmail.com";
//	long long int AccountNumber=100074500205;
    struct Customer detail ={"EbediMeleck","Male",28,"(+250) 734772160","niyojohnpeter01@gmail.com",100074500205 };
	struct myaddress address={ "Karongi","Bwishyura", "Kiniha", "Karutete"};
	char occupation[30] = "Teacher/Trainer";
	printf("----------------------- Account Detail :-------------------\n");
	printf("==========================================================");
	printf("\n                                                       \n");
	printf("\n\tName:%s",detail.name);
	printf("\n\tName:%s",detail.sex);
	printf("\n\tAge :%d",detail.age );
	printf("\n\tTellnumber:%s",detail.telnumber);
	printf("\n\tAccountNumber: %lld",detail.AccountNumber);
	printf("\n\tEmail:%s",detail.email);
	printf("\n\tAddress:%s,%s,%s,%s",address.district,address.sector,address.cell,address.village);
	printf("\n\tEmail:%s",occupation);
	printf("\n                                                      \n");
	printf("\n==========================================================");
	printf("\n------------------------End for Account Detail-----------------\n");
		
}
// for account balance 
//grobol variable decration
float balance = 74500.5000;
int  transactionID =000000;
char transactionNumberWD[30] ="27012024WD"; 
float amaunt ;
  //withdraw of  money function definition and decration 
void ChecktheBalance(){
	 printf("------------------------Account Balance :-------------------\n");
	 printf("==========================================================");
	 printf("\n                                                       \n");
//     float balance = 74500.5000;
     printf("\n\t Account Balance: %.4f.FRW",balance);
     printf("\n                                                       \n");
     printf("\n==========================================================");
	 printf("\n---------------------End for Account Balance --------------\n");
}

// withdraw of  money function definition and decration  
void PerformWithdraw(){
	 printf("\n------------------------Withdraw :-------------------");
     printf("\n======================================================\n");
     printf("\nEnter Amount You want to WithDraw:");
  
    scanf("%f",&amaunt);
     if(amaunt<=72500.5000 &&  amaunt>=17470.5000){
  	   balance = balance - amaunt;
  	   printf("your balance is %f\n",balance);
  	   transactionID ++;
  	   printf("Successfull Transaction ID is %s%06d \n",transactionNumberWD,transactionID);
  	   
  	
    }else{
  	   printf("Oop Unsuficient Money");
   }
      printf("\n                                                       \n");
      printf("\n==========================================================");
	  printf("\n---------------------End for   --------------------------\n");
  
}

// deposit function definition 
void PerformDeposit(){
	// body for function 
	  float Deposite ;
      char transationIDDp[30] ="27012024DP";
      printf("------------------------Deposite Amaunt :-------------------\n");
	  printf("=============================================================");
	  printf("\n Enter the amaunt To Deposit:");
	  scanf("%f",&amaunt);
	  if(amaunt>=1455.5000){
	      balance = balance + amaunt;
  	      printf("your balance is %f\n",balance);
  	      transactionID ++;
  	      printf("Successfull Transaction ID is %s%06d ",transationIDDp,transactionID);	
	  }else{
	 	printf("Oop Unsufficient ");
	  }
	  printf("\n                                                       \n");
      printf("\n==========================================================");
	  printf("\n---------------------End for   --------------------------\n");
}
int main(){
	 int press ;
	 time_t t;
     struct tm *tme;
     time(&t); 
     tme = localtime(&t);
     printf("Current  Date and time Now: %02d-%02d-%04d %02d:%02d:%02d\n",tme->tm_mday, tme->tm_mon + 1, tme->tm_year + 1900,
           tme->tm_hour, tme->tm_min, tme->tm_sec) ;
	//main menu display for first time 
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+                                                        +\n");
	printf("+                    MAIN MENU                           +\n");
	printf("+                                                        +\n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+        PRESS 1 TO DISPLAY CUSTOMER INFORMATION         +\n");
	printf("+        PRESS 2 TO CHECK THE BALANCE                    +\n");
	printf("+        PRESS 3 TO WITHDRAW                             +\n");
	printf("+        PRESS 4 TO DEPOSIT                              +\n");
	printf("+        PRESS 5 TO CONTINUE                             +\n");
	printf("+        PRESS 6 TO EXIT                                 +\n");
	printf("+                                                        +\n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	
	
	do{
		
		//start  for do while loop
		
	
	printf("\n   Enter Number Between (1 - 6) Here : ");	
	scanf("%d",&press);
	switch(press){
		case 1:
			DisplayCustomerinformation();
		break;
		case 2:
			ChecktheBalance();
		break;
		case 3:
			PerformWithdraw();
		break;
		case 4:
			PerformDeposit();
		break;
		case 5:
			
			continue;
		break;
		case 6:
			printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++");
			printf("\n+            THANK YOU FOR USE OUR SERVICE            +");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++");
			exit(1);
		break;
		default:
			printf("\n Oooo Invalid Value you Have Entered\n ");
					
    }
		
		//end for while loop 
		
	}while(press!=0 ||press!=6);
	return 0;
}
