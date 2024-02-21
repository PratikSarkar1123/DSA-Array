#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{ 
    int temp=0;
  for(int i=0;i<size;i++,size--)
  {
    temp=arr[i];
    arr[i]=arr[size-1];
    arr[size-1]=temp;
  }
  for(int i=0;i<10;i++)
{
     cout<<arr[i]<<" ";
}
}

int main()
{
// int size ;
// cin>>size;

int arr[10]={2, 4 ,57, 10, 12 , 45 , 65 , 33,22,16};

for(int i=0; i<10; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
reverseArray(arr,10);

return 0;
}