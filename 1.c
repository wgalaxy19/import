#include<stdio.h>
#include "111.c"
int main()
{
int choice,d;
do
{
printf("\n\n*****************\n");
printf("STACK OPERATIONS\n");
printf("*****************\n");
printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Display");
printf("\n4. Exit");
printf("\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the number: ");
scanf("%d",&d);
push(d);
break;
case 2:
d = pop();
printf("\nPopped item: %d", d);
break;
case 3:
display();
break;
case 4:
printf("\nThank you..\n\n");
break;
default:
printf("Invalid choice\n");
}
}while(choice != 4);
}