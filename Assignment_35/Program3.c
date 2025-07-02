/* Write a program which returns addition of all even elements from singly linked linear list
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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

int AdditionEven(PNODE head)
{
    int iSum = 0;

    while(head != NULL)
    {
        if((head->data) % 2 == 0)
        {
             iSum = iSum + (head->data);
        }
        head = head->next;
    }
    return iSum;   
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
    int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet = AdditionEven(First);

    printf("Addition of Even Elements from linked list are:%d\n",iRet);
    
    return 0;
}