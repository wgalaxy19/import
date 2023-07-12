#include<stdio.h>
#include<stdlib.h>
void mergesort(int *,int,int);
void merge(int *a,int lb,int mid,int ub);
int c=0,n;
int main()
{
int *a,i,j,temp;
printf("\nEnter how many numbers: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
a = (int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
mergesort(a,0,n-1);
printf("\nThe sorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nNumber of comparisons done: %d\n\n",c);
}
void mergesort(int *a,int lb,int ub)
{
int mid;
if(lb < ub)
{
mid = (lb + ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge(a,lb,mid,ub);
}
}
void merge(int *a,int lb,int mid,int ub)
{
int i,j,k;
int *b;
b = (int *)malloc(n*(sizeof(int)));
i=lb;
j=mid+1;
k=lb;
while(i<=mid && j<=ub)
{
c++;
if(a[i] <= a[j])
{
b[k] = a[i];
i++;
}
else
{
b[k] = a[j];
j++;
}
k++;
}
while(j<=ub)
{
b[k] = a[j];
j++;
k++;
}
while(i<=mid)
{
b[k] = a[i];
i++;
k++;
}
for(k=lb;k<=ub;k++)
{
a[k] = b[k];
}
}