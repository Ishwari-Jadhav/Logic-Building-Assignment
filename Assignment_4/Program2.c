//Write a program which accept a number from user and display its factors in decreasing order.

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;       //updater
    }
    for(iCnt = iNo/2;iCnt >= 1;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
    
int main()
{
    int iValue =0;
    printf("Enter numder:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

//Time complexity : O(N/2)