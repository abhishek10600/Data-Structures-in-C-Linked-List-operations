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
struct Node *deleteatindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
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
    printf("\n Linked list after deletion at index : \n");
    deleteatindex(head, 2);
    display(head);
}