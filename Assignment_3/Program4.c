//Accept one character from user and convert case of that character 

#include<stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("Converted character:%c",CValue-32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("Converted character:%c",CValue+32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}