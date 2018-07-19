#include <iostream>
using namespace std;

int adding(int number) {
    if (number == 10) {
        return number;
    } else {
        cout << number + 1 << endl;
        adding(number + 1);
    }
}
int main() {
    int t = 0;
    adding(t);

    return 0;
}
