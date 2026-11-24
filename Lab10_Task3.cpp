#include <iostream>
#include <string>
using namespace std;

int main() {
    const string FAVORITE_FRUIT = "apple";
    string guess;

    do {
        cout << "Guess my favorite fruit? ";
        cin >> guess;
    } while (guess != FAVORITE_FRUIT);

    cout << "Correct answer" << endl;
    return 0;
}
