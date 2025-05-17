//Write a program which accept radius of circle from user and calculate its area.Consider value of PI as 3.14.(Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float PI = 3.14f;
    
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter radius:");
    scanf("%f",&fValue);
    dRet = CircleArea(fValue);
    printf("Area of Circle is:%f",dRet);
    return 0;
}
