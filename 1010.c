#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}
int dequeue()
{
    struct node *temp;
    int d;
    temp = front;
    if (front == NULL)
    {
        printf("\nThe queue is empty\n\n");
    }
    else
    {
        d = temp->data;
        front = front->next;
        free(temp);
        return d;
    }
}
void display()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("\nThe queue is empty\n\n");
    }
    else
    {
        temp = front;
        printf("\nThe queue is: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}