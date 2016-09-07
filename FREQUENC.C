#include<stdio.h>
#include<conio.h>
#define max 10
int main()
{
int i,n,a[max],m;
clrscr();
printf("enter limit");
scanf("%d",&n);
printf("enter element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>n)
{
a[a[i]%n]=a[a[i]%n]+n;
}
else
a[a[i]]=a[a[i]]+n;
}
m=a[0];
for(i=0;i<n;i++)
{
if(a[i]>m)
{
m=a[i];
}
}
printf("the no which has max frequency is %d",i);
getch();
return 0;
}
