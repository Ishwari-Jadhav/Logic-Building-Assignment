//Accept amount in US dollar and return its corresponding value in Indian currency

#include<stdio.h>
int DollarToINR(int iNo)
{
    int iIndia = 0;
    int iDollar = 70;
    if(iNo >= 0)
    {
        iIndia = iNo * iDollar;
    }
    return iIndia;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of USD:");
    scanf("%d",&iValue);
    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    return 0;
}
//time complexity : O(N)