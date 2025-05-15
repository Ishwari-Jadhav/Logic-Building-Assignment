// Write a program which accept distance in kilometre and convert it into meter.(1 kilometre = 1000 Meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKilo = 1000;
    int iMeter = 0;
    iMeter = iKilo * iNo;
    return iMeter;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter distance:");
    scanf("%d",&iValue);
    iRet = KMtoMeter(iValue);
    printf("Converted Distance is:%d",iRet);
    return 0;
}
//time complexity :O(N)