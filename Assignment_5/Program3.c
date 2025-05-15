//Write a program which accepts number from user and print its numbers line

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iNeg = -iNo;
    int iPos = iNo;
    
    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

//time Complexity : O(N)