//Write a Recursive program which accepts number from user and return its factorial.
//Input :  5
//Output : 120

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo > 1)
    {
        iFact = iFact * iNo;
        Fact(iNo-1);
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}