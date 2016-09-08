#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 10
int main()
{
int a[max],i,k,j,n,flag=0,pos,pos1;
printf("\nenter the limit");
scanf("%d",&n);
printf("\nenter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the index to find the sum");
scanf("%d",&k);
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
  {
   if((a[i]*a[i])+(a[j]*a[j])==(a[k]*a[k]))
    {
    printf("%d %d",i,j);
     flag++;
     break;
    }
  }
}
if(flag==0)
printf("the nos are not found");
getch();
return 0;
}