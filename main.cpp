#include <iostream>

using namespace std;

int collatz (int n);

int main () {

    int n;
    cout << "input n" << endl;
    cin >> n;

    int x = 1;
    while (x != 10) {
        cout << "original value of current loop " << n << endl;
        x++;
    }
    cout << "current n = " << collatz(n) << endl;

    
}


int collatz (int n) {

    while (n != 1) {

        if (n % 2 == 0) {
            int n = n / 2;
        } else {
            int n = (n * 3) + 1;
        }
    }
    return n;
}

