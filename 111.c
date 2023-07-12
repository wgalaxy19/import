#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int n)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    new->data = n;
    new->next = top;
    top = new;
}
int pop()
{
    int data;
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        data = temp->data;
        top = top->next;
        free(temp);
        return data;
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("The stack is\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}