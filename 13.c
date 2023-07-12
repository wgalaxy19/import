#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a,k,l,u,flag = 0,mid,i,c=0;
printf("\nEnter how many numbers: ");
scanf("%d",&n);
printf("Enter %d numbers in ascending order: ",n);
a = (int *)malloc(n*sizeof(int));
for(i = 0;i < n;i++)
{
scanf("%d",a + i);
}
printf("\nEnter the key to be searched: ");
scanf("%d",&k);
l = 0;
u = n - 1;
while(flag == 0 && l <= u)
{
mid = (l + u)/2;
c++;
if(k == a[mid])
{
printf("\n%d is found at location %d", k, mid + 1);
printf("\nNumber of comparisions done: %d", c);
flag = 1;
}
else if(k < a[mid])
{
u = mid - 1;
}
else
{
l = mid + 1;
}
}
if(flag == 0)
{
printf("\n%d is not found in the array.",k);
printf("\nNumber of comparisions done: %d", c);
}
printf("\n\n");
}