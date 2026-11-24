#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    cout << "Enter your Phone number: ";
    cin >> phone;

    string code = phone.substr(0, 5);

    if (code == "00966")
        cout << "Country: Saudi Arabia" << endl;
    else if (code == "00926")          // code as listed in the lab sheet
        cout << "Country: Jordan" << endl;
    else if (code == "00971")
        cout << "Country: United Arab Emirates" << endl;
    else
        cout << "Country: Unknown" << endl;

    return 0;
}
