#include <iostream>
using namespace std;
/*
 * a = 1
 * b = 2
 *
 * sum = a + b
 * a = b
 * b = sum
 *
 * */

int main() {
    int a = 1;

    int b = 1;

    int counter = 1;
    int sum = 0;
    int how_many;
    cout << "how many numbers?";
    cin >> how_many;
    cout << a << " ";
    cout << b << " ";

    while(counter != how_many) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
        counter++;
    }

    return 0;
}