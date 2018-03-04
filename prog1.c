#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
char name[20],pnum[10],date[10],anum[15],address[100],dob[10],branch[20];
int age,cnum,deposit,wd;
float s,f,f1,f2,f3;
void sucess();
void menu();
int main_exit;
int c,c1;
main()
{   
    char p[10]="apple123",p1[10];
    system("COLOR 3");
    printf("\t ===========================================================\n");
	printf("\t \t *********************************\n");
	printf("\t \t =================================\n");
	printf("\t \t **********************************\n");
	printf("\t \t ^                                *\n");
	printf("\t \t ^     customer account           *\n");
	printf("\t \t ^                                *\n");
	printf("\t \t ^                                *\n");
	printf("\t \t ^                                *\n");
	printf("\t \t ^    Bank limited                *\n");
	printf("\t \t***********************************\n");
	printf("\t ============================================================\n");
	printf("\n\n\n\t\t enter any key to continue......");
	getch();
	printf("\n\n\n\t\t enter the password:");
	gets(p1);
	if(strcmp(p,p1)==0)
	{
    printf("\xB2\xB2password matched\xB2\xB2\n");
	printf("\n\n\n\n\n\nLoading.");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".\n\n");
	
    } 
    else
	{
		printf("match not found");
	}
	menu();
}
	void menu()
	{
	printf("\t\t================================================\n");
	printf("\t\t\t\t\tState bank\n");
	printf("\t\t=================================================\n\n\n");
	printf("\t\t\t \xB2\xB2 Main Menu \xB2\xB2 \n");
	printf("\t\t\t1.Add new account\n");
	printf("\t\t\t2.Modify Account\n");
	printf("\t\t\t3.Transcation\n");
	printf("\t\t\t4.Deleting Account\n");
	printf("\t\t\t5.view\n");
	printf("\t\t\t6.exit\n");
    
    printf("Enter your choice:");
    scanf("%d",&c);	
	switch(c)
{
	case 1:
		printf("Account number:");
	    scanf("%s",&anum);
		printf(" Name:");
		scanf("%s",name);
		printf(" Date of Birth:");
		scanf("%s",&dob);
		printf("Age:");
		scanf("%d",&age);
		printf("Address:");
		scanf("%s",address);
		printf("Citizenship Number:");
		scanf("%d",&cnum);
		printf("Phone number:");
		scanf("%s",pnum);
		printf("Amount to Deposite:");
		scanf("%d",&deposit);
		printf("\n\n\n\t\tType of account:\n");
    printf("1.Savings\n");
	printf("2.Fixed\n");
	printf("3.Fixed(1 year)\n");
    printf("4.Fixed(2 year)\n");
	printf("5.Fixed(3 year)\n");  
	switch(c1)
	{ 
	case 1:
		printf("Savings\n");
		break;
    case 2:		
		printf("Fixed\n");
		break;
    case 3:		
		printf("Fixed(1 year)\n");
		break;
	case 4:
		printf("Fixed(2 years)\n");
		break;
	case 5:
		printf("Fixed(3 years)");
		break;
	}
	    printf("enter your choice");
	    scanf("%d",&c1);
	    {
		printf("\t\t\tAccount is created sucessfully\n\n");
		printf("enter 1 to goto main menu 0 to exit");
		scanf("%d",&main_exit);
	    }
	if(main_exit==1)
		menu();
    
	case 2:
		printf("enter account number of the customer whose info is to change:\n");
		scanf("%s",anum);
		printf("enter the name");
		scanf("%s",&name);
		printf("enter the phone no");
		scanf("%s",pnum);
		printf("enter the branch");
		scanf("%s",&branch);
		printf("modified data %s \n %s \n %s \n %s",anum,name,pnum,branch);
		printf(" enter 1 to go to main menu 0 to exit ");
		scanf("%d",&main_exit);
		if(main_exit==1)
		menu();
		break;

	case 3:  
	printf("enter account number");
	scanf("%s",anum);
	printf("enter the ammount withdrawled");
	scanf("%d",&wd);
	if(wd>1000)
	{
	printf("you have exceded the limit ");
    } 
	else 
	printf("withdrawled ammount is %d",wd);
	scanf("%d",&main_exit);
		if(main_exit==1)
		menu();
	break;
	case 4:
	strcpy(anum,NULL);
    strcpy(name,NULL);
    strcpy(cnum,NULL);
    strcpy(pnum,NULL);
    strcpy(deposit,NULL);
	strcpy(age,NULL);
	strcpy(address,NULL);
	scanf("%d",&main_exit);
		if(main_exit==1)
		menu();
	break;
	case 5:display();
	scanf("%d",&main_exit);
		if(main_exit==1)
		menu();
		break;
	case 6:
			exit(0);
			
}
}
void display()
{
	printf("Account Details");
	printf("customer name:%s \n account no:%s \n phone number:%s address:%s \n age:%d \n",name,anum,pnum,address,age);
}
