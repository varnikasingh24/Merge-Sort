#include<process.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

int a[100], size;

void inputarray()
{
int i;
cout<<"\nEnter the size of the array";
cin>>size;
cout<<"Enter the values:\n";
   for(i=0;i<size;i++)
     {
      cin>>a[i];
     }
getch();
}

int print()
{
int i;
cout<<"\n";
  for(i=0;i<size;i++)
  {
   cout<<a[i]<<"\t";
  }
getch();
return 0;
}
void merge(int p,int q,int r)
{
int check,n1,n2,l[100],ri[100],i,j,k;
n1=q-p+1;
n2=r-q;
  for(i=0;i<n1;i++)
  {
   l[i]=a[p+i];
  }
  for(j=0;j<n2;j++)
  {
   ri[j]=a[q+j+1];
  }
 l[n1]=2000;
 ri[n2]=2000;
 i=0;
 j=0;
for(k=p;k<=r;k++)
{
if(l[i]<=ri[j])
{ a[k]=l[i];
i++;
}
else
{
a[k]=ri[j];
j++;
}
}
print();
getch();
}
void merge_sort(int p,int r)
{
int q;
if(p<r)
{ 
q=(p+r)/2; 
merge_sort(p,q); 
merge_sort(q+1,r); 
merge(p,q,r);
}
}
void main()
{
clrscr();
int choice; 
L:
cout<<"\n Merge Sort";
cout<<"\n 1.inputnumbers";
cout<<"\n 2.Merge Sort";
cout<<"\n 3.print the array";
cout<<"\n 4.exit";
cout<<"\n enter the choice:";
cin>>choice;
switch(choice)
{
case 1: inputarray();
goto L;
case 2: merge_sort(0,(size-1));
goto L;
case 3: print();
goto L;
case 4: exit(0);
}
getch();
}
