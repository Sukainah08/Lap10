#include <iostream>
#include <string>
using namespace std;

int main() {
    string fname, mname, lname, age;

    cout << "First Name: ";
    cin >> fname;
    cout << "Middle Name: ";
    cin >> mname;
    cout << "Last Name: ";
    cin >> lname;
    cout << "Age: ";
    cin >> age;

    // Middle letter of the first and middle names
    string password = "";
    password += fname.substr(fname.length() / 2, 1);
    password += mname.substr(mname.length() / 2, 1);
    password += lname + age;

    cout << "Password: " << password << endl;
    return 0;
}
