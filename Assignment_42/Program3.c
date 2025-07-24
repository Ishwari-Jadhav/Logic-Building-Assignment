//Write a Recursive program which accepts string from user and count number of Characters.
//Input :  Hello
//Output : 5

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlen(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter the String : ");
    scanf(" %[^\n]",arr);

    iRet = Strlen(arr);

    printf("Number of Characters in string are : %d\n",iRet);

    return 0;
}