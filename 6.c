#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct node
{
int data;
struct node *next;
};
struct node *head[SIZE] = {NULL}, *ptr;
int divisionHash(int k)
{
return k%SIZE;
}
void insert(int k)
{
int i;
i = divisionHash(k);
struct node *new = (struct node *)malloc(sizeof(struct node));
new->data = k;
new->next=NULL;
if(head[i] == NULL)
{
head[i]=new;
}
else
{
ptr = head[i];
while(ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next=new;
}
}
void display()
{
int i;
for(i=0;i<SIZE;i++)
{
ptr = head[i];
while(ptr!=NULL)
{
if(ptr->next !=NULL)
printf("%d --> ",ptr->data);
else
printf("%d",ptr->data);
ptr=ptr->next;
}
printf("\n");
}
}
void search(int k)
{
int i;
i = divisionHash(k);
if(head[i] == NULL)
{
printf("Search element is not in the list");
}
else
{
for(ptr = head[i];ptr!=NULL;ptr=ptr->next)
{
if(ptr->data == k)
{
printf("Search element is in the list at index %d", i);
break;
}
}
if(ptr==NULL)
{
printf("Search element is not in the list");
}
}
}
int main()
{
int choice, k;
do
{
printf("\n1.Insert\n2.Display\n3.Search\n4.Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the key value to be inserted: ");
scanf("%d",&k);
insert(k);
break;
case 2:
display();
break;
case 3:
printf("Enter the key value to be searched: ");
scanf("%d",&k);
search(k);
break;
case 4:
printf("Thank you\n\n");
break;
default:
printf("Invalid choice");
}
}while(choice!=4);
}