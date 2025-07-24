//Write a Recursive program which accepts number from user and return its Reverse Number.
//Input :  523
//Output : 325

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reversed Number is : %d\n",iRet);
    
    return 0;
}