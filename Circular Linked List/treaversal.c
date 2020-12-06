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

    display(head);
}