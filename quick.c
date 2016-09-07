#include<stdio.h>
#include<conio.h>
#define max 10
void quick_short(int [],int ,int);
int partition(int [],int ,int);
void main()
{
int i,n,a[10];
printf("enter the limit");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick_short(a,0,n-1);
printf("after short");
for(i=0;i<n;i++)
{
  printf("%d",a[i]);
}
getch();
}
void quick_short(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=partition(a,low,high);
        quick_short(a,low,mid-1);
        quick_short(a,mid+1,high);
    }
}
int partition(int a[],int low,int high)
{

    int i=low,j=high,pivot=a[j],temp;
    while(i<j)
    {
        while(a[i]<pivot)
            i++;
        while(a[j]>=pivot)
            j--;
        if(i<j)
        {

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[high]=a[i];
    a[i]=pivot;
    return i;
}
