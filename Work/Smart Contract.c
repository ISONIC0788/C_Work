#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#include <errno.h>  // For EEXIST

//=======
#include<ctype.h>
#include<direct.h>

void display();
#define PASSWORD_LENGTH 15
//>>>>>>> f4c7c3fb653a3cf78f63d72bbada2402a4668df8
void create_account();// it will be assigned to jack
void login(char name[],int number);//ebedi task
void check_balance();//edison
void deposit();
void withdraw();
void transfer();
//my deration 

// global  variable 
 int amount = 100 ;
 char tel[15] ;
 int passkey;
 int SavedPin; 
 char userName[100];
// start  my function decration
 
/*
  my funcfuction 

*/
void transfer();
void transactionMessage(int amount);

void amauntFile(){
		// to read file number 
	FILE *file;
	file = fopen("amount.txt", "r");
	if(file == NULL){
		printf("Oop File doest not Exist ");
//		return 1;
	}
	if(fscanf(file,"%d %d",&amount,&tel)== 2){
		
	}else{
		printf("Filed to read Amount");
	}
	fclose(file);
}

void  checkPin(){
		FILE *pfile ;
	pfile = fopen("pin.txt","r");
	
	if(pfile == NULL){
		printf("File does no exit");
		
	}
	
	if(fscanf(pfile ,"%d",&SavedPin)==1){
		printf("The pin is ",SavedPin);
	}else{
		printf("Failed To read pin ");
	}
	fclose(pfile);
}

void  checkuSername(){
		FILE *pfile ;
	pfile = fopen("username.txt","r");
	
	if(pfile == NULL){
		printf("File does no exit");
		
	}
	
	if(fscanf(pfile ,"%s",&userName)==1){
		printf("The pin is ",userName);
	}else{
		printf("Failed To read pin ");
	}
	fclose(pfile);
}
void  checkTelnumber(){
		FILE *pfile ;
	pfile = fopen("telnum.txt","r");
	
	if(pfile == NULL){
		printf("File does no exit");
		
	}
	
	if(fscanf(pfile ,"%s",&tel)==1){
		printf("The tel is ",tel);
	}else{
		printf("Failed To read pin ");
	}
	fclose(pfile);
}


// end for open function 


//enf for transifer file


// global  variable 
 int amount ;
// int tel ;  comment
 int passkey; 

/***************************************************
login function 
***************************************************/
void login(char name[],int number){
 	
}

/*********************************************
transifer function 
*********************************************/


// end for funtion 

float withdrawnmoney;
void menu_display();

// global  variable
char name[100];
char dir[100];
long int id;
int number,number1,pin;
int choice;
 int amount ;
// int tel ;
 int passkey;
float balance=0.00;
float depositedmoney;
int press;
// Function to display menu
void display() {
    printf("+++++ WELCOME TO SMART CONTRACTS +++++\n");
    printf("+ 1 Create account                   +\n");
    printf("+ 2 Login to your account            +\n");
    printf("+ 3 Exit                             +\n");
    printf("++++++++++++++++++++++++++++++++++++++ \n");
    printf("SELECT CHOICE: \n");
    // inputing choice
    scanf("%d",&choice);
    switch(choice){
    case 1:
        create_account();
        break;
    default:
        printf("Invalid input!");
    }
}
// Function to create an account and save user information to a file
void create_account() {
    printf("ENTER YOUR NAME: \n");
    // Use fgets to allow spaces in names and prevent buffer overflow
        getchar(); // To consume the newline character left by previous scanf
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; // Remove the newline character

        // Validate if the name is alphabetic only
        int validName = 1;
        for (int i = 0; i < strlen(name); i++) {
            if (!isalpha(name[i])) {
                validName = 0;
                printf("_________________________\n| Please Enter a name! |\n_________________________\n");
                create_account();
            }

        }
    FILE *file;
    int storedNames[100];  // Array to hold numbers from file
    int count = 0, userName, found = 0;
    char buffer[50];

          // Entering ID
        printf("ENTER YOUR ID: \n");
        scanf("%d", &id);
        if(id == 0){
            printf("Invalid input");
        }
        else{
            // Generate random number
            srand(time(NULL));
            number = rand() % 1000000;
            printf("YOUR NUMBER IS: %d \n",number);

            // CREATING PIN
            printf("CREATE YOUR PIN: \n");
            scanf("%d", &pin);
            // checking pin
            if(pin != 0){
            // changing directory
            chdir("Users/");
            // creating new folder
            if(_mkdir(name) == 0){
               // FOR COPYING NAME INTO DIR
                for(int i=0;i<=strlen(name) -1;i++){
                    dir[i] = name[i];
                }
                //changing directory
                chdir(strcat(dir,"/"));
                // Creating file pointer
                FILE *info;
                info = fopen("User Information.txt","w");
                if(info == NULL){
                  printf("Error creating a file\n");
                }
                else{
                    if(fprintf(info,"%s\n%d\n%d\n%d",name,id,number,pin) == 0){
                    printf("File created");
                    fclose(info);
                    }
                    else{
                            // CREATING USER INFORMATION
                        FILE *passkey_file;
                        passkey_file = fopen("Pass Key.txt","w");
                        if(fprintf(passkey_file," ")){
                            fclose(passkey_file);
                            // CREATING TRANSFER FILE
                            FILE *balance;
                            balance = fopen("Balance.txt","w");
                             fprintf(balance," ");
                                // USER MENU
                                menu_display();
                                fclose(balance);
                                // CALLING LOGIN FUNCTION
                            }


                            else{
                                    printf("Operation failed");

                            }
                        }
                    }
                }
                else{
                printf("User '%s' ALREADY EXISTS! \n",name);
                create_account();
            }
            }
            else{
                printf("Invalid pin!");
            }




        }


    }


// This is a function for generating random passkey
void GenPasskey(int len, char *str);

int main(){
display();
//amauntFile();
// checkPin();
// checkuSername();
 transfer(); 
return 0;
}

// Function for generating passkey
void GenPasskey(int len, char *pass){
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890'";
	int charset_size = sizeof(charset) - 1;
	for(int i=0;i<=len;i++){
		pass[i] = charset[rand() % charset_size];
	}
	pass[len] = '\0';
}



	//function for checking balance

void check_balance(){
	printf("balance: %.2f \n",balance);   //initial balance
	}

//function for checking deposited

void deposit(){
	printf("Enter the amount \n");
	scanf("%f",&depositedmoney);
	printf("you have deposited : %.2f \n",depositedmoney);
	balance +=depositedmoney;
	printf("new balance : %.2f \n",balance);
	menu_display();
	}
//function for checking withdrawn
void withdraw(){
	float fees;
	printf("Enter the amount to withdraw \n");
	scanf("%f",&withdrawnmoney);
	fees=withdrawnmoney*5/100;
	if(withdrawnmoney + fees >balance){
		printf("Sorry insufficient balance \n");

	}
	else{
	balance -=  withdrawnmoney+fees;
	printf("you have withdrawn :%.2f \n", withdrawnmoney);
	printf("new balance : %.2f \n",balance);

		}
		menu_display();
		}

//function for checking transfered

void menu_display(){
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+                                                        +\n");
	printf("+                    MAIN MENU                           +\n");
	printf("+                                                        +\n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("+        PRESS 1 CHECK BALANCE                           +\n");
	printf("+        PRESS 2 DEPOSIT                                 +\n");
	printf("+        PRESS 3 TO WITHDRAW                             +\n");
	printf("+        PRESS 4 TRANSFER                                +\n");
	printf("+        PRESS 5 GENERATE PASS KEY                       +\n");
	printf("+        PRESS 6 YOUR ACCCOUNT INFO                       +\n");
	printf("+        PRESS 7  TO EXIT                                +\n");
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

		do{

		//start  for do while loop


	printf(" Enter Number Between (1 - 7) Here : ");
	scanf(" %d",&press);
	switch(press){
	case 1:
		check_balance();
		break;
    case 2:
    	 deposit();
    	 break;
    case 3:
		 withdraw();
	    break;
	case 4:
		 //amauntFile();
        // checkPin();
       // checkuSername();
		 transfer(); 
    case 5:
    	srand(time(NULL));
        char random[PASSWORD_LENGTH + 1];
        GenPasskey(PASSWORD_LENGTH,random);
        printf("Your passkey is: %s", random);
        chdir("User/");
        char user_dir[100];
        for(int i=0;i<=strlen(name) - 1;i++){
            user_dir[i] = name[i];
        }
        chdir(strcat(user_dir,"/"));
        FILE *passkey_open;
        passkey_open  = fopen("Pass Key.txt","w");
        if(fprintf(passkey_open,"%s",random) == 0){
            printf("+++++++++++++++++++++++++++++++++++");
            printf("+ YOUR PASSKEY IS: %s +",random);
            printf("+++++++++++++++++++++++++++++++++++");
            fclose(passkey_open);
        }

    		break;
    case 6:
	 // user_information_display();
	case 7:
		exit(1);
	default:
		printf(" invalid input\n");

    		}

}
while(press<=1 || press == 7 );
}

// transifer decration 

// function of transifer 
void transfer(){
 int PIN ;
 char TelNumber[20];
 char PassKey[100]; // string  baffer 
 char StorPassKey[] = "Ebedimeleck";
 printf("\n+++++++++++++++++++++++++++++++++++++++");
 printf("\n|   Welcome come to money transifer   |");
 printf("\n+++++++++++++++++++++++++++++++++++++++");
 
 char inputUserName[200];
 printf("\n || Enter User Name:");
 fgets(inputUserName,sizeof(inputUserName),stdin);
 inputUserName[strcspn(inputUserName , "\n")] = 0 ;
 chdir("Users/");
 // Creating deal
 char user_dir_loc[100];
 for(int i = 0;i<=strlen(inputUserName) - 1;i++){
 	user_dir_loc[i] = inputUserName[i];
 }
 if(_chdir(user_dir_loc) == 0){
 printf("\n || Enter your PIN:");
 scanf("%d",&PIN);
 
 // for checkin  pin 
 while (getchar() != '\n');
 // remove buffer space 
 if(PIN == SavedPin ){ //123
 	
 	 printf("\n || Please Enter the Tel number:");
 	 printf("\n || Please Enter Valid Number:");
 	 fgets(TelNumber, sizeof(TelNumber),stdin);
 	 TelNumber[strcspn(TelNumber,"\n")] = 0 ;
 	 
 	 
 
 	 // if for checking number if it is avalailabel in oroganisation 
 	 if(strcmp(TelNumber,tel ) == 0){ // "078888"
 	 	    printf("\n || Please Enter the pass Key     :");
			printf("\n || Please Enter the Valid Passkey:");
            fgets(PassKey, sizeof(PassKey),stdin);
            
			PassKey[strcspn(PassKey,"\n")] = 0 ;  

			printf("\n ||The length of the  is : %lu\n",strlen(PassKey)) ;
			 // for checking pass key lenght
			 int lenPas = strlen(PassKey);
			if(lenPas>0){
				
					// checking the pass key  if match to stored pass key 
			    if(strcmp(PassKey,StorPassKey)== 0){
			      	printf("\n || Pass Key Is verified");
			      	printf("\n || Please Enter The Amount:");
			      	int inputAmount;
			      	scanf("%d",&inputAmount);
			      	
			      	//
			      	while(getchar()!= '\n');
			      	// check amount 
			      	if(inputAmount<=amount){
			      		printf("\n || Confrim Amount To send %d :",inputAmount);
			      		printf("\n || Type YES(Y) or NO (N)");
			      		char conf[10];
			      		fgets(conf, sizeof(conf),stdin);
			      		conf[strcspn(conf, "\n")] = 0;
			      		if(strcmp(conf, "Y") == 0){
			      			 printf("\n || You have Confrimed");
			      			 transactionMessage(inputAmount);
			      			 printf("\n || Press Enter To Exit in this Message");
			      			 char Exit[10];
			      			 fgets(Exit,sizeof(Exit),stdin);
			      			 
							 if(Exit[0]== '\n'){
							 	printf("\n ........You have To Exited........... ");
							 }

			      			 
						  }else if(strcmp(conf, "YES") == 0){
						  	printf("\n || You have Confrimed");
						  	transactionMessage(inputAmount);
						  	
						  }else if(strcmp(conf, "y") == 0){
						  	printf("\n || You have Confrimed");
						  	transactionMessage(inputAmount);
						  }
						  else if(strcmp(conf, "N")==0){
						  	printf("\n || You have Exit in System ");
						  	
						  }
						   else if(strcmp(conf, "n")==0){
						  	printf("\n || You have Exit in System ");
						  	
						  }
						  else if (strcmp(conf, "NO")==0){
						  	printf("\n || You have Exit in System ");
						  }else {
						  	printf("\n || Invalid input");
						  }

					  }else{
					  	  printf("\n Ooop Unsufficient Amount ");
					  }
			      	
			      }else {
			        printf("\n Pass key is not valid");
			    }
			
			}
					 
	  }else{
	  	printf("\n *****Enter The valid Number******");
	  }
 	 
    } else {
  	   printf("\n ****Your are not allowed to use this System****");
       }	
	
 	
 	
 	
 	// end for checking name 
 }else{
 	printf("There is no such user name");
 }

}

void transactionMessage(int amount){
	printf("\n+++++++++++++++++++++++++++++++++++++++++");
	printf("\n|         Transaction Message           |");
	printf("\n+_______________________________________+");
	printf("\n|         Transaction Message           |");
	printf("\n|         Sender Name :                 |");
	printf("\n|         Transaction Message           |");
	printf("\n|         Amount Send %d               |",amount);
	printf("\n|         Transaction Message           |");
	printf("\n|         Transaction Message           |");
	printf("\n+++++++++++++++++++++++++++++++++++++++++");
	
}

