#include<iostream>
// #include <array> 

using namespace std;
bool linearSearch(int key, int size ,int arr[])
{
   for(int i=0; i<size; i++)
   {
    if (arr[i] == key)
    {
        return 1;
    }
   }
   return 0;
}

int main()
{
int key;

int arr[10]={0,1,2,3,4,5,6,29,17,23};
cout<<"enter key to be searched";
cin>>key;

int result=linearSearch(key,10, arr);
if (result==1)
{
cout<<"element found"<<endl;
}
else {
cout<<"element not found";

}

return 0;
}