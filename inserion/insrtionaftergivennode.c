#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertionafter(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}

void main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 8;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = NULL;

    printf("\n Linked List before insertion:\n");
    display(head);
    insertionafter(head, second, 99);
    printf("\n Linked List after insertion after : \n");
    display(head);
}