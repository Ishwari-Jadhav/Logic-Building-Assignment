/*Accept number of Rows and number of columns from user & display below pattern
Input: iRow = 5, iCol = 5
Output: 1 2 3 4 5
        2 3 4 5 6
        3 4 5 6 7
        4 5 6 7 8
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        iNum = i;

        for(j = 1; j <= iCol; j++,iNum++)
        {
            printf("%d\t",iNum);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows And Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
