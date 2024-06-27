#include<iostream>
using namespace std;

  void arrmin( int arr[5])
{

     int  min=arr[0];
for (int i = 0; i<5; i++)
{
 if( min>arr[i])
     {
        min=arr[i];
        
     }
}
cout<<"the minimum value in array="<<min;

}
int main(){
    int arr[5]={10,2,53,44,15};

     arrmin(arr);

    return 0;
}