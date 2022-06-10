#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int TotalAmount=1000 , Amount, Amo;
int tr,TotalDeposit=0,TotalWith=0,Totaltr=0 ;
	
int list();
void deposit();
void withdraw();
void transfer();
void checkDetail();

int main()
{	
while(1)
 { 	
 switch(list())
 {
 	case 1: 
	 		deposit();
 		 	TotalDeposit+=Amount;
 	        break;
 	case 2: 
	 		withdraw();
 			if(Amo<=TotalAmount)
	 		{
   			TotalWith+=Amo;
   			}
 		 	break;
 	case 3: 
	 		transfer();
 			if(tr<=TotalAmount)
 			{
 				Totaltr+=tr;
			}
			break;
 	case 4: 
	 		checkDetail();
 			break;
 	case 5:
 			exit(0);
 	default:
 			printf("\n Invalid choice ! ");
    }
 }
 
	return 0;
}

int list()
{
	int ch;
	printf("\nWelcome !\n");
	printf("\n1.Deposit Amount \n2.Withdraw Amount\n3.Transfer Amount \n4.Check Details\n5.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	return ch;
}
void deposit()
{
	printf("Enter the amount you want to deposit :");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}

void withdraw()
{
	printf("Enter the amount you want to withdraw :");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount)
	{
		TotalAmount-=Amo;
	}else
	{
		printf("Sorry ! You don't have much balance in your account");
	}
}

void transfer()
{
	printf("Enter the amount you want to transfer :");
	scanf("%d",&tr);
	if(tr<=TotalAmount)
	{
		TotalAmount-=tr;
	}
	else
	{
		printf("Sorry ! You don't have much balance in your account");
	}
}

void checkDetail()
{
	printf("Total Amount :",TotalAmount);
	printf("\n Total Deposited Amount :",TotalDeposit);
	printf("\nTotal Withdrawn Amount :",TotalWith);
	printf("\n Total Transferred Amount:",Totaltr);
}
