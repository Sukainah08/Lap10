#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50], reversed[50];

    cout << "Enter a string: ";
    cin.getline(str, 50);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
        reversed[i] = str[len - 1 - i];
    reversed[len] = '\0';

    cout << "Reverse string: " << reversed << endl;
    return 0;
}
