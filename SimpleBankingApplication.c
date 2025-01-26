#include<stdio.h>
#include <stdlib.h>
struct myaddress{
	char *district  ;
	char *sector  ;
	char *cell ;
	char village[30] ;
	
};
void DisplayCustomerinformation(){
	char *name = "EbediMeleck";
	char *sex = "Male";
	int age = 28;
	char *telnumber ="(+250) 734772160" ;
	char *email =": niyojohnpeter01@gmail.com";
	long long int AccountNumber=100074500205;
	struct myaddress address={ "Karongi","Bwishyura", "Kiniha", "Karutete"};
	char occupation[30] = "Teacher/Trainer";
	printf("----------------------- Account Detail :-------------------\n");
	printf("==========================================================");
	printf("\n                                                       \n");
	printf("\n\tName:%s",name);
	printf("\n\tName:%s",sex);
	printf("\n\tAge :%d",age );
	printf("\n\tTellnumber:%s",telnumber);
	printf("\n\tAccountNumber: %lld",AccountNumber);
	printf("\n\tEmail:%s",email);
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
  //check balance 
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

// with drow money 
void PerformWithdraw(){
	 printf("\n------------------------Withdraw :-------------------");
     printf("\n======================================================\n");
     printf("\nEnter Amount You want to WethDraw:");
  
    scanf("%f",&amaunt);
     if(amaunt<=72500.5000 &&  amaunt>=17470.5000){
  	   balance = balance - amaunt;
  	   printf("your balance is %f\n",balance);
  	   transactionID ++;
  	   printf("Successfull Transaction ID is %s%06d ",transactionNumberWD,transactionID);
  	
  }else{
  	   printf("Oop Unsuficient Money");
  }
      printf("\n                                                       \n");
      printf("\n==========================================================");
	  printf("\n---------------------End for   --------------------------\n");
  
}

// deposite 
void PerformDeposit(){
	  float Deposite ;
      char transationIDDp[30] ="27012024DP";
      printf("------------------------Deposite Amaunt :-------------------\n");
	  printf("=============================================================");
	  printf("\n Enter the amaunt To Deposit:");
	  scanf("%f",&amaunt);
	  if(amaunt>1455.5000){
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
	//main menu
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
		
		//start 
		
	
	printf("\n      Enter Value Here: ");	
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
		
		//end
		
	}while(press!=0 ||press ==6);
	return 0;
}
