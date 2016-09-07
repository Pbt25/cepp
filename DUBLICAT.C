#include<stdio.h>
#include<conio.h>
#define max 10
int main()
{
int n,i,a[max],f=0;
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
a[a[i]]=a[a[i]]*-1;
}
for(i=1;i<n;i++)
{
if(a[i]>0)
f++;
}
if(f>=1)
printf("dublicate found");
else
printf("no dublicate");
getch();
return 0;
}