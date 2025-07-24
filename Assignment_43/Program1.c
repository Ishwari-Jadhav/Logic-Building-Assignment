//Write a Recursive program which accepts string from user and count white spaces.
//Input :  HE llo WOr lD
//Output : 3

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String : ");
    scanf(" %[^\n]",arr);

    iRet = WhiteSpace(arr);

    printf("Number of White Spaces are : %d\n",iRet);

    return 0;
}