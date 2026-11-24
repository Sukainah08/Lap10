#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string first, second, last;

    cout << "Enter First name: ";
    cin >> first;
    cout << "Enter Second name: ";
    cin >> second;
    cout << "Enter Last Name: ";
    cin >> last;

    string full = first + " " + second + " " + last;
    for (size_t i = 0; i < full.length(); i++)
        full[i] = toupper(full[i]);

    cout << "Full Name in capital letter is: " << full << endl;
    return 0;
}
