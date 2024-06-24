#include<iostream>

using namespace std;
int b=88;
int main ()
{
    int a=5.2;
    float b=4.8;
   int sum= a+b;

// SCOPE OF VARIABLE

    cout<<"the value of a  is = "<<a<<endl;
    cout<<"the value of b = "<<b<<endl;
    cout<<"the global value of bv= "<<::b<<endl;  // to access globlal variable use :: scope resolution operator.

// SIZE OF DATA TYPE

   cout<<"the size of 5.2 is = "<<sizeof(5.2)<<endl;
     cout<<"the size of 5.2f is = "<<sizeof(5.2f)<<endl;
     cout<<"the size of 5.2l is = "<<sizeof(5.2l)<<endl;
  

    return 0;
}