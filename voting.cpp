#include <iostream>
using namespace std;

int main()
{
    int i, age;

    cout << "Enter your age to check that you are eligiable for voating." << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "you are not eligiable for voating." << endl;
    }
    
    else
    {
        cout << "you are eligiable for voating" << endl;
    }

    return 0;
}