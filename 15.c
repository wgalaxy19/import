#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a,i,j,c=0,temp;
printf("\nEnter how many numbers: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
a = (int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-i-2;j++)
{
c++;
if(a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf("\nThe sorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nNumber of comparisons done: %d\n\n",c);
}