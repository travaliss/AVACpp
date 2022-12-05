#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter string: ";
    string s1, s2 = "";
    cin >> s1;
    int i = 0;
    while (s1[i] != '\0') {
        s2 += s1[i];
        ++i;
    }
    cout << "Copy string: " << s2 << '\n';
    return 0;
}