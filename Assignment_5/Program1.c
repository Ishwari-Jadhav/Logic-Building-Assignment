//Write a program which accepts number from user and print that number of $ & * on screen
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf(" $ & * ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

//Time Complexity : O(N)