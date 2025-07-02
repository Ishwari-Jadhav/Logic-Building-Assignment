/*Write a program which displays Smallest digits of all digits of all elemrnt from singly linear linked list.
Input linked list : |11|->|250|->|532|->|415|
Output: 1  0  2  1
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void DisplaySmall(PNODE head)
{
    int iSmall = 0;
    int iDigit = 0;
    int iNo = 0;

    printf("Smallest digits of all digits of all elemrnt from linked list:");

    while(head != NULL)
    {
        iSmall = 9;
        iNo = head->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d ",iSmall);
        head = head -> next;
    }
    printf("\n");
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head -> next;
    }
    printf("NULL\n\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);

    DisplaySmall(First);
    
    return 0;
}