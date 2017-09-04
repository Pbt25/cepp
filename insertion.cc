#include<iostream>
#define max 10
using namespace std;
void insertion(int [],int );
int main()
	{
		int i,n,a[max];
		cout<<"\n enter the range (please enter less then 10)";
			cin>>n;
		cout<<"\n enter the element of the array";
		for(i=0;i<n;i++)
			cin>>a[i];
		insertion(a,n);                                               // calling of insertion function
		cout<<"\n the values after sort are";
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		return 0;

	}


void insertion(int a[],int n)
{
		int temp,i=1,j;

  		while(i<n)
  			{
   				temp=a[i];
   				for(j=i-1;j>=0;j--)
      					{
        					if(a[j]>temp)
           						a[j+1]=a[j];
        					else if(a[j]<temp)
         						{
           							a[j+1]=temp;
           							break;
         						}
        					if(j==0)
          					a[j]=temp;

      					}
  				i++;
  			}

}
