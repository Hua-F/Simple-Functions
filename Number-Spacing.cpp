#include <iostream>
#include <cstdlib>
using namespace std;

int evenlySpaced(int list[], int count) {
    int spacing = abs(list[1] - list[0]);
    for (int i = 1; i < count - 1; i++) {
        int currentSpace = abs(list[i + 1] - list[i]);
        if (currentSpace != spacing) {
            return -1;
        }
    }
    return spacing;
}

int main() {
    int list[] = {2, 4, 6, 8, 6, 4, 2};
    size_t count = sizeof(list) / sizeof(list[0]);
    cout << "The numbers in the array are:";
    for (size_t i = 0; i < count; i++) {
        cout << " " << list[i];
    }

    int result = evenlySpaced(list, count);
    if (result != -1) {
        cout << endl << "The numbers are evenly spaced with a spacing of " << result << endl;
    } else if (result == -1) {
        cout << endl << "The numbers are not evenly spaced: ";
        printf("%i\n", result);
    }
    return 0;
}
