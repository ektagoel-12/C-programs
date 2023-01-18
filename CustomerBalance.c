/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Customer{
    int accNo;
    char name[100];
    float balance;
};
void checkBal(struct Customer obj)
{
    if(obj.balance<100)
    {
        printf("Account Number %d\n",obj.accNo);
        printf("Customer Name %s\n",obj.name);
    }
}
int main()
{
    
    struct Customer c[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter Account Number \n");
        scanf("%d",&c[i].accNo);
        printf("Enter customer NAME \n");
        scanf("%s",c[i].name);
        printf("Enter employee Balance \n");
        scanf("%f",&c[i].balance);
    }
    for(int i=0;i<3;i++)
    {
        checkBal(c[i]);
    }

    return 0;
}
