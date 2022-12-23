#include <iostream>
#include <string>

using namespace std;

int fib(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int check(string a) {
    for (auto now : a) {
        if (now < '0' || now > '9') {
            throw "It's not a positive integer, enter a positive integer: ";
            break;
        }
    }
    int x = stoi(a);
    if (x > 100) {
        throw "This number is more than 100, enter the less number: ";
    }
    return x;
}

int main() {
    string a;
    bool b = true;
    cin >> a;
    while (b) {
        try {
            int n = check(a);
            for (int i = 1; i <= n; i++) {
                cout << fib(i) << " ";
            }
            cout << endl;
            b = false;
        }
        catch (const char* str) {
            cout << str;
        }
    }

    return 0;
}