#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

//prime
//int input;
//cout << "Enter the number to check if prime or not:";
//cin >> input;
//int divisor = 2;
//bool isPrime = true;
//while (divisor != input-1) {
//if (input % divisor != 0) {
//divisor++;
//}
//else {
//cout << "Input is not a prime number.";
//isPrime = false;
//break;
//}
//}
//if (isPrime) {
//cout << "Prime input!";
//}
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