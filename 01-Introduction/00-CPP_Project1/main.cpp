#include <iostream>
using namespace std;
int main()
{
    // declaring a integer variable with a initial value of 100
    int fav_number{100};
    // writing on console
    cout << "Hello!" << endl;
    cout << "Enter your favorite number: ";
    // getting information from console
    cin >> fav_number;
    // using a conditional statement
    if (fav_number == 50)
    {
        cout << "Amazing! " << fav_number << " is my fav. number too" << endl;
    }
    else
    {
        cout << "Your favorite number is: " << fav_number << endl;
    }
    return 0;
}