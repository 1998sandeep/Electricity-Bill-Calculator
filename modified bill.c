#include<string.h>
#include<stdio.h>
#include<conio.h>
	int unit_consumed,choice;
	char adhr[12],cust_id[5],fnm[80],snm[50];
	float charge,amt,total_amt,gst;
int main()
{
	printf("Eneter choice for identification\n");
	ele();
}
int ele()
{
	printf("1. customer ID 2. Adhar Card\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
y:				printf("Enter 5 digit customer id\n");
				scanf("%s",cust_id);
				if (strlen(cust_id)==5)
				{
					printf("Enter customer first name\n");
					scanf("%s",&fnm);
					printf("Enter customer last name\n");
					scanf("%s",&snm);
					printf("\nEnter unit consumed\n");
					scanf("%d",&unit_consumed);
					if (unit_consumed<=1 && unit_consumed>=120)
					{
					charge=4.95;
					}
					else if (unit_consumed<=121 && unit_consumed>=240)
					{
					charge=6.25;
					}
					else
					{
					charge=7.25;
					}
					amt=charge*unit_consumed;
					gst=amt*18/100;
					total_amt=amt+gst;
					if(total_amt<50)
					{
						total_amt=50;
					}
					printf("\t\t\tElectricity Bill\n\n");
					printf("Customer name is:%s",fnm);
					printf(" %s",snm);
					printf("\nCustomer id:  %s",cust_id);
					printf("\nBill charge is: %f",amt);
					printf("\n 18 '/. gst is :%f",gst);
					printf("\nyour total charge is: %f",total_amt);
					printf("\n \tTHANK YOU !");
				}
				else
				{
				printf("Wrong input\n");
				goto y;
				}
				break;
			}
		case 2:
			{
x:				printf("Enter 12 digit customer Adhar card no. \n");
					scanf("%s",adhr);
					if(strlen(adhr)==12)
					{
					printf("Enter customer first name\n");
					scanf("%s",&fnm);
					printf("Enter customer last name\n");
					scanf("%s",&snm);
					printf("\nEnter unit consumed\n");
					scanf("%d",&unit_consumed);
					if(unit_consumed<=1 && unit_consumed>=120)
					{
					charge=4.95;
					}
					else if(unit_consumed<=121 && unit_consumed>=240)
					{
					charge=6.25;
					}
					else
					{
					charge=7.25;
					}
					amt=charge*unit_consumed;
					gst=amt*18/100;
					total_amt=amt+gst;
					if(total_amt<50)
					{
						total_amt=50;
					}
					printf("\t\t\tElectricity Bill\n\n");
					printf("Customer name is:%s",fnm);
					printf(" %s",snm);
					printf("\nCustomer adhar card no. is: %s",adhr);
					printf("\nBill charge is: %f",amt);
					printf("\n18 '/. gst is :%f",gst);
					printf("\nyour total charge is: %f\n",total_amt);
					printf("\n \tTHANK YOU !");
					}
					else
					{
					printf("Wrong input\n");
					goto x;
					}
					break;
			}
	}
	getche();
	return 0;
	}
