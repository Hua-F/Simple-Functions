#include <iostream>
using namespace std;

    int tripleCheck(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers to find if they form a Pythagorean triple: ";
    cin >> num1 >> num2 >> num3;
    cout << "You entered the numbers: " << num1 << ", " << num2 << ", " << num3 << endl << "which is: ";

    bool result = tripleCheck(num1, num2, num3);
    printf("%i\n", result);

    return 0;
}
