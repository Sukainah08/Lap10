#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter String to toggle: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    cout << "The toggled string: " << str << endl;
    return 0;
}
