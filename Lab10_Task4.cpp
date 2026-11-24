#include <iostream>
#include <string>
using namespace std;

int main() {
    char letter;
    string phrase;

    cout << "Enter letter: ";
    cin >> letter;
    cin.ignore();              // discard the newline left in the buffer

    cout << "Enter phrase: ";
    getline(cin, phrase);

    int counter = 0;
    for (size_t i = 0; i < phrase.length(); i++)
        if (phrase[i] == letter)
            counter++;

    cout << "The letter \"" << letter << "\" occurred " << counter << " times." << endl;
    return 0;
}
