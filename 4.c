#include<stdio.h>
#include<stdlib.h>
int c = 0;
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void printArray(int *a, int n)
{
int i;
printf("\nThe array: ");
for(i = 0;i < n;i++)
{
printf("%d ",a[i]);
}
printf("\n\n");
}
int partition(int *a, int lb, int ub)
{
int pivot, start, end;
pivot = a[lb];
start = lb;
end = ub;
while(start < end)
{
c++;
while(a[start] <= pivot && start < ub)
{
start++;
}
c++;
while(a[end] > pivot && end > lb)
{
end--;
}
if(start < end)
{
swap(&a[start], &a[end]);
}
swap(&a[lb],&a[end]);
return end;
}
}
void quicksort(int *a, int lb, int ub)
{
int loc;
if(lb < ub)
{
loc = partition(a,lb,ub);
quicksort(a, lb, loc - 1);
quicksort(a, loc + 1, ub);
}
}
int main()
{
int *a,i,n;
printf("\nEnter how many numbers: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
a = (int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("Array before sorting:");
printArray(a,n);
quicksort(a, 0, n - 1);
printf("Array after sorting:");
printArray(a,n);
printf("Number of comparisons done: %d\n\n",c);
}