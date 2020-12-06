#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("\n Element: %d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertionatfront(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

void main()
{
    struct Node *head, *second, *third, *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 50;
    head->next = second;

    second->data = 55;
    second->next = third;

    third->data = 60;
    third->next = fourth;

    fourth->data = 65;
    fourth->next = head;

    printf("\n Circular Linked List before insertion:\n");
    display(head);
    head = insertionatfront(head, 45);
    printf("\n Circular Linked List after insertion:\n");
    display(head);
}