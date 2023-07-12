#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a,k,i;
printf("\nEnter how many numbers: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
a = (int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("\nEnter the key to be searched: ");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i] == k)
{
printf("%d is found at location %d\n",k,i+1);
printf("Number of comparisons done: %d\n\n",i+1);
break;
}
}
if(i==n)
{
printf("%d is not found in the array.\n\n",k);
printf("Number of comparisons done: %d\n\n",n);
}
}