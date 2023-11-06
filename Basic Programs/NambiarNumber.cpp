#include <iostream>
using namespace std;

int getSumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

bool isNambiarNumber(int number) {
    while (number >= 10) {
        int sumOfDigits = getSumOfDigits(number);
        number = number * 10 + sumOfDigits;
    }
    return number == 1;
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (isNambiarNumber(number)) {
        cout << "It is a Nambiar number." << endl;
    } else {
        cout << "It is not a Nambiar number." << endl;
    }

    return 0;
}

