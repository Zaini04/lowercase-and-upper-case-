#include <iostream>
using namespace std;
#include <ctype.h>

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    int result = islower(letter);
    cout << "Result: " << result << endl;
    return 0;
}
