//1. Write a program which accept number from user and display below pattern

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("* ",iNo);
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("# ",iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
//time complexity : O(N)