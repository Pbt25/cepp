#include<stdio.h>
#include<conio.h>
#define max 10
void selection(int a[],int);
int main()
{
int n,i,a[max];
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selection(a,n);
printf("after swap");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}
void selection(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
