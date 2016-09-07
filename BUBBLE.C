#include<stdio.h>
#include<conio.h>
#define max 10
void bubble_short(int [],int);
int main()
{
int i,j,n,a[max];
printf("enter limit");
scanf("%d",&n);
printf("enter element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubble_short(a,n);
printf("after swap");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}
void bubble_short(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}