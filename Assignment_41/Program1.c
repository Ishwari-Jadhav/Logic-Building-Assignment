//Write a recursive program which display below pattern.
//Input :   5
//Output :  * * * * *

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(i <= iNo)
    {
        printf("*\t");
        i++;
        Display(iNo);
    }
    else
    {
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}