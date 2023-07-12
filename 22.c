#include<stdio.h>
#include<stdlib.h>
struct node
{
float coeff;
int exp;
struct node *next;
};
void addterm(struct node **h,float c, int e)
{
struct node *new, *temp;
temp=*h;
new = malloc(sizeof(struct node));
new->coeff=c;
new->exp=e;
new->next=NULL;
if(*h==NULL || e > (*h)->exp)
{
new->next=*h;
*h=new;
}
else
{
temp=*h;
while(temp->next!=NULL && temp->next->exp > e)
{
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
}
}
struct node* add(struct node *h1,struct node *h2)
{
struct node *p1=h1,*p2=h2,*h3=NULL;
while(p1!=NULL && p2!=NULL)
{
if(p1->exp == p2->exp)
{
addterm(&h3,p1->coeff+p2->coeff,p1->exp);
p1=p1->next;
p2=p2->next;
}
else if(p1->exp > p2->exp)
{
break;
addterm(&h3,p1->coeff,p1->exp);
p1=p1->next;
}
else
{
addterm(&h3,p2->coeff,p2->exp);
p2=p2->next;
}
}
while(p1!=NULL)
{
addterm(&h3,p1->coeff,p1->exp);
p1=p1->next;
}
while(p2!=NULL)
{
addterm(&h3,p2->coeff,p2->exp);
p2=p2->next;
}
return h3;
}
void display(struct node *h)
{
struct node *temp;
temp=h;
while(temp!=NULL)
{
if(temp->exp == 0)
{
printf("%0.1f",temp->coeff);
}
else
{
printf("%0.1fxˆ%d",temp->coeff,temp->exp);
}
if(temp->next != NULL)
{
printf(" + ");
}
temp=temp->next;
}
printf("\n");
}