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
        printf("\n Element: %d", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

void main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 24;
    second->next = third;

    third->data = 28;
    third->next = fourth;

    fourth->data = 32;
    fourth->next = NULL;

    printf("\n Linked list before deletion: \n");
    display(head);
    head = deleteFirst(head);
    printf("\n Linked list after deletion : \n");
    display(head);
}