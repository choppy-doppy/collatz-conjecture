#include <iostream>

using namespace std;

int main () {

    int n;
    cout << "input n" << endl;
    cin >> n;

    for ( ; ; ) {

        int num = n;

        if (num == 1)
            n++;

        if (num % 2 == 0) {
            num / 2;
            cout << "n = " << num << endl;
        } else if (num % 2 != 0) {
            (num * 2) + 1;
            cout << "num = " << num << endl;
        } else;

    }
}


