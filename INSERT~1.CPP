#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[50],n;
int inputnos()
{
int i;
printf("\n enter no. of elements of array");
scanf("%d",&n);
printf("\n enter elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
int printarray()
{
int i;
printf("\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}
int insertion_sort()
{
int j,key,i;
j=1;
while(j<n)
{
key=a[j];
i=j-1;
while((i>-1)&&(a[i]>key))
{
a[i+1]=a[i];
i=i-1;
}
a[i+1]=key;
printarray();
j=j+1;
}
}

void main()
{
inputnos();
insertion_sort();
getch();
}

