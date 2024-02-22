#include<iostream>
using namespace std;
int main()
{
int arr[6]={1,2,3,4,5,6};
for(int i=0; i<6; i++)
{
 cout<<arr[i]<<" ";
}
cout<<endl;

int temp=0;
for(int i=0;i<6;i=i+2)
{
   temp=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;
}
for(int i=0; i<6; i++)
{
 cout<<arr[i]<<" ";
}
return 0;
}