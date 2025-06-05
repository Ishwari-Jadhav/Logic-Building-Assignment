/* Accept N numbers from the user and accept one another number as NO ,return index of Last occurence of that NO 
Input:  N:  6
        NO: 66
        Elements: 85 66 3 66 93 88
Output: 3
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength;iCnt > 0;iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    printf("Enter the number:");
    scanf("%d",&iValue);
    
    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occurence of number is : %d",iRet);
    }

    free(p);

    return 0;
}