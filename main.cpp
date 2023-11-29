#include <iostream>

using namespace std;

int main () {

    int n = 1;

    cout << "original value: " << n << endl;

    for ( ; ; ) {

        if (n % 2 == 0) {
            n / 2;
        } else {
            n * 2 + 1;
        }

        cout << "current value: " << n << endl;

        if (n == 1)
            n++;

        cout << "n = " << n << endl;
    }
}
