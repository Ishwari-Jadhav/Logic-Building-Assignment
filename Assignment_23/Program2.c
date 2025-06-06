/*Accept character from user.If characters is small display its corresponding capital character, and if it small then 
display its corresponding capital.In other cases display as it is.
Input : Q
Output : q
*/

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))  
    {
        ch = ch + ('a' - 'A');   
    }
    else if((ch >= 'a') && (ch <= 'z'))  
    {
        ch = ch - ('a' - 'A');   
    }
    printf("Converted character: %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the charcater:");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}