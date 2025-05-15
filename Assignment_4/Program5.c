//Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;       //updater
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumFact - iSumNonFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}

//Time complexity : O(N)