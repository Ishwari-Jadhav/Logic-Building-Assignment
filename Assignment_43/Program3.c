//Write a Recursive program which accepts string from user and count Number of Small Characters.
//Input :  HElloWOrlD
//Output : 5

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    scanf(" %[^\n]",arr);

    iRet = Small(arr);

    printf("Number of Small Characters are : %d\n",iRet);

    return 0;
}