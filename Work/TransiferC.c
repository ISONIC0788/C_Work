 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#include<direct.h>
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
int main(){
/*
this my function

*/
 amauntFile();
 checkPin();
 checkuSername();
 transfer(); 

/*
 end fro my function 
*/
		

	return 0;
}



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
