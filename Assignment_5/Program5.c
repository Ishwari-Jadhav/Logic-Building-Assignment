//Write a program which accepts N and Print First 5 multiples of N.

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= 5;iCnt++)
    { 
       printf("%d ",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
