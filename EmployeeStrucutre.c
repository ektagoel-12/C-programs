/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Employee{
    int empID;
    char empName[100];
    char empDesig[50];
    char empDep[50];
    int empSal;
};

int main()
{
    struct Employee e1;
    printf("Enter employee ID \n");
    scanf("%d",&e1.empID);
    printf("Enter employee NAME \n");
    scanf("%s",e1.empName);
    printf("Enter employee Designation \n");
    scanf("%s",e1.empDesig);
    printf("Enter employee Department \n");
    scanf("%s",e1.empDep);
    printf("Enter employee Salary \n");
    scanf("%d",&e1.empSal);
    printf("The details are: \n");
    printf("%d \n %s \n %s \n %s \n %d",e1.empID,e1.empName,e1.empDesig,e1.empDep,e1.empSal);

    return 0;
}
