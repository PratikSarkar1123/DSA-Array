#include<iostream>
using namespace std;

int ArrSum(int num[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
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

cout<<"Sum of element of size "<<size<<"is"<<ArrSum(num,size);
return 0;
}