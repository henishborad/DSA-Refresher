#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter the number to check if prime or not:";
    cin >> input;
    int divisor = 2;
    bool isPrime = true;
    while (divisor != input-1) {
        if (input % divisor != 0) {
            divisor++;
        }
        else {
            cout << "Input is not a prime number.";
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Prime input!";
    }
    return 0;
}

//fibonacci
//int a = 1;
//int b = 1;
//int counter = 1;
//int sum = 0;
//int how_many;
//cout << "how many numbers?";
//cin >> how_many;
//cout << a << " ";
//cout << b << " ";
//while(counter != how_many) {
//sum = a + b;
//cout << sum << " ";
//a = b;
//b = sum;
//counter++;
//}