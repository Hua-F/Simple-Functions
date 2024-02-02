#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void capitalize(string &text) {
    for (size_t i = 0; i < text.length(); i++) {
        if ((i == 0 || isspace(text[i - 1])) && islower(text[i])) {
            text[i] = toupper(text[i]);
        }
    }
}

int main() {
    string input;
    cout << "Enter a sentence to capitalize: ";
    getline(cin, input);
    
    capitalize(input);
    cout << "Capitalized sentence: " << input << endl;

    return 0;
}
