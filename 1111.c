#include<stdio.h>
#include<stdlib.h>
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
if(rear == NULL)
{
front = rear = new;
rear->next = front;
}
else
{
rear->next = new;
rear = new;
rear->next = front;
}
}
int dequeue()
{
struct node *temp;
int d;
temp = front;
if(rear == NULL)
{
printf("\nThe queue is empty\n\n");
}
else if(front == rear)
{
front = rear = NULL;
free(temp);
}
else
{
d = temp->data;
front = front->next;
rear->next = front;
free(temp);
return d;
}
}
void display()
{
struct node *temp;
temp = front;
if(front == NULL)
{
printf("\nThe queue is empty\n\n");
}
else
{
printf("\nThe queue is: ");
do
{
printf("%d ",temp->data);
temp = temp->next;
}while(temp != front);
}
printf("\n");
}