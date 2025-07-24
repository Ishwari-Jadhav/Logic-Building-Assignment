//Write a Recursive program which accepts number from user and return summation of its digits.
//Input :  879
//Output : 24

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of Digits is : %d\n",iRet);

    return 0;
}