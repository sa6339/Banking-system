# include<stdio.h>
#include <conio.h>
#include <stdlib.h>

void creation();
void deposit();
void withdraw();
void bal();
int a=0,i = 101;
struct bank
{
    int no;
    char name[20];
    float bal;
    float dep;
}
s[20];
int main()
{
   int ch;
   while(1)
   {
       
       printf("\n********************");

       printf("\nBANKING");
       printf("\n********************");

       printf("\n1-Creation");
       printf("\n2-Deposit");
       printf("\n3-Withdraw");
       printf("\n4-Balance Enquiry");
       printf("\n5-Exit");
       printf("\nEnter your own choice from the above : ");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1: creation();
           break;

           case 2: deposit();
           break;

           case 3: withdraw();
           break;

           case 4: bal();
           break;

           case 5: exit(0);
           default: 
           printf("Enter 1-5 only");
           getch();
       }
   } 
return 0;
}
void creation()
{
    printf("\n********************");
    printf("\nACCOUNT CREATION");
    printf("\n********************");
    printf("\nYOUR ACCOUNT NUMBER IS : %d",i);
    s[a].no = i;


    printf("\nEnter your Name : ");
    scanf("%s",s[a].name);


    printf("\nYour Deposit is Minimun Rs.500");
    s[a].dep=500;
    a++;
    i++;
    getch();
}
void deposit()
{
    int no, b=0, m=0;
    float aa;
    printf("\n********************");
    printf("\nDEPOSIT");
    printf("\n********************");
    printf("\nENTER YOUR ACCOUNT NUMBER : ");
    scanf("%d",&no);
    for(b=0;b<i;b++)
    {
        if(s[b].no == no)
        m = b;
    }
    if(s[m].no == no)
    {
        printf("\nACCOUNT NUMBER : %d",s[m].no);
        printf("\nNAME : %s",s[m].name);
        printf("\nDEPOSIT : %f",s[m].dep);
        printf("\nHOW MUCH YOU WANT TO DEPOSIT : ");
        scanf("%f",&aa);
        s[m].dep+=aa;
        printf("\nDEPOSIT AMOUNT IS : %f",s[m].dep);
        getch();
    }
    else
    {
        printf("\nACCOUNT NUMBER IS INVALID");
        getch();
    }

}
void withdraw()
{
    int no, b=0, m=0;
    float aa;
    printf("\n********************");
    printf("\n WITHDRAW");
    printf("\n**********************");
    printf("\n ENTER YOUR ACCOUNT NUMBER : ");
    scanf("%d",&no);
    for(b=0;b<i;b++)
    {
        if(s[b].no == no)
        m = b;

    }
    if(s[m].no == no)
    {
        printf("\nACCOUNT NUMBER : %d",s[m].no);
        printf("\nNAME : %s",s[m].name);
        printf("\nDEPOSIT : %f",s[m].dep);
        printf("\n HOW MUCH WITHDRAW NOW : ");
        scanf("%f",&aa);
        if(s[m].dep<aa+500)
        {
            printf("\nCANNOT WITHDRAW, YOUR ACCOUNT HAS MINIMUM BALANCE");
            getch();
        }
        else
        {
            s[m].dep-=aa;
            printf("\nThe Balance Amount is : %f",s[m].dep);
            
        }
    }
    else
    {
        printf("INVALID");
        getch();
    }
    getch();
}
void bal()
{
    int no, b=0, m=0;
    float aa;
    printf("\n******************");
    printf("\n BALANCE ENQUIRY");
    printf("\n******************");
    printf("\nENTER YOUR ACCOUNT NUMBER : ");
    scanf("%d",&no);
    for(b=0;b<i;b++)
    {
        if(s[b].no == no)
        m = b;
    }
        if(s[m].no == no)
        {
            printf("\n ACCOUNT NUMBER : %d",s[m].no);
            printf("\n NAME : %s",s[m].name);
            printf("\n DEPOSIT : %f",s[m].dep);
            getch();
        }
        else
        {
            printf("INVALID");
            getch();
        }
    
}