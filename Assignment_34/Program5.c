/* Write a program which return smallest element from singly linear linked list.

Input Linked list : |110|->|230|->|20|->|240|->|640|
Output : 20

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

int SmallestElement(PNODE head)
{
    int iSmallest = 0;

    iSmallest = head->data;

    while(head != NULL)
    {
        if((head->data) < iSmallest)
        {
            iSmallest = head->data;
        }
        head = head -> next;
    }
    return iSmallest;
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

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);

    iRet = SmallestElement(First);

    printf("Smallest element from Linked list is:%d\n",iRet);
    
    return 0;
}