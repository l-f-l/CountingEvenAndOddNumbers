#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3, number4;
    int evens = 0;

    cout << "Please enter 4 positive integers, separated by a space: " << endl;
    cin >> number1 >> number2 >> number3 >> number4;
    
    if (number1 % 2 == 0)
        evens++;
    if (number2 % 2 == 0)
        evens++;
    if (number3 % 2 == 0)
        evens++;
    if (number4 % 2 == 0)
        evens++;

    if (evens > 2)
        cout << "more evens" << endl;
    else if (evens < 2)
        cout << "more odds" << endl;
    else
        cout << "same number of evens and odds" << endl;

    return 0;
}