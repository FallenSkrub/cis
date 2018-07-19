#include <iostream>
using namespace std;
int myFactorial (int integer)
{
    if (integer == 1)
    {
        return 1;
    }
    else
    {
        return (integer * (myFactorial(integer-1)));
    }
}   
    int main() {
        int z = 6, t = 15, input;
        cout << "Please enter your favorite number here: ";
        cin >> input;

        while (t <= input) {
            z *= t;
            t++;
    }
    cout << z << endl;
    
return 0;
}

