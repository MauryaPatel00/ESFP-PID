#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:
    printf("                               ________________________________\n");
    printf("                              |                                     Ganpat University                                        |\n");
    printf("                              |----------------------------------------------------------------------------------------------|\n");
    printf("                              |                                         PID:130                                              |\n");
    printf("                              |                          project name: khelmahakumbh                                         |\n");
    printf("                              |                                     Subject: ESFP-1                                          |\n");
    printf("                              |                                        Batch: 11                                             |\n");
    printf("                              |                                  Enrollment No.: CBA03                                       |\n");
    printf("                              |                                       Designed by                                            |\n");
    printf("                              |                                          Maurya                                              |\n");
    printf("                              |________________________________|\n");
printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"maurya")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have enetred an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

if(strcmp(pass,"2705")==0)

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.Join with writer\n");
	printf("2.Go to study information\n");
	printf("3.Get information about sport \n");
	printf("4.Get help for studys \n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
		
		
	case 1: {
				printf("\nPLEASE SELECT \n\n");
			printf("1.Mohan sir\n");
			printf("2.Ramesh sir\n");
			printf("3.Mohini maam\n");
			printf("4.Rohini maam\n");
		
		
		    int choice1;
		    choice1:
		    printf("ENTER SUB:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\nFor MATHS\n");
				printf("\n For PHYSICS\n");
				printf("CHEMISTRY\n");
				printf("FOR EXAME\n\n");
				goto hlo;
			 } 
			 else if(choice1==2)
			 {
			 	printf("\nexam form:\n");
				printf("test prac.\n");
				printf("video\n");
				printf("\n\n");
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 		printf("\n:\n");
				printf("\n");
				printf("\n");
				printf("\n\n");
				goto hlo;
			 }
			  else if(choice1==4)
			 {
			 	printf("\n\n");
				printf("\n");
				printf("\n");
				printf("\n\n");
				goto hlo;
			 }
			  else if(choice1==4)
			 {
			 	printf("\n\n");
				printf("\n");
				printf("\n");
				printf("\n\n");
				goto hlo;
			 }
			  else if(choice1==5)
			 {
			 	printf("\n\n");
				printf("\n");
				printf("\n");
				printf("\n\n");
				goto hlo;
			 }
		    else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("PLEASE SELECT VIDEO \n\n");
				printf("1.Vector Algebra\n");
				printf("2.Three Dimensional Geometry\n");
				printf("3.Linear Programming\n");
				printf("4.Probability\n");
				printf("5.Differential Equations\n");
				
				int choice2;
				choice2:
		        printf("ENTER YOUR CHOICE :");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("\nAny numerical method in linear algebra can be regarded as a sequence of arithmetic operations carried out on elements of the input data. If for any input data a numerical method makes it possible to find a solution of the problem in finitely many arithmetic operations, such a method is called direct.\n\n");
					goto a;
				 }
				  
				  if(choice2==6)
                {
                	
					printf("\n\n");
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
				 
				 break;
		
		
	}
	
	default:
		printf("wrong Input\n");
	}





return 0;
}


int input(){

    int number;
    scanf("%d", &number);
    return (number);
}
