//Write a program which accept temperature in Fahrenheit and convert it into celsius.(1 celsius =(Fahrenheit -32)*(5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCel = (fTemp - 32)*(5.0/9.0);
    return fCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);
    dRet = FhtoCs(fValue);
    printf("Converted Temperature is:%f",dRet);
    return 0;
}
