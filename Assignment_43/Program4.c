//Write a Recursive program which accepts number from user and return Smallest digit.
//Input :  87983
//Output : 3

#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;

        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Smallest Digit is : %d\n",iRet);

    return 0;
}