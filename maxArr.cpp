#include<iostream>
#include <limits.h>

using namespace std;

int getMAX(int arr[],int n)
{
    int max= 0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
int size ;
cin>>size;

int num[100];

for(int i=0;i<size;i++)
{   
    cout<<"Enter element"<<i<<endl;
    cin>>num[i];
}

cout<<"Max value is "<<getMAX(num,size);

return 0;
}