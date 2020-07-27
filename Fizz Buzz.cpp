// Fizz Buzz.cpp : FizzBuzz project from the Loops block lesson, Codecademy.
//

#include <iostream>
using namespace std;

int main()
{
    
    // Brain explodes here:
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz!\n";
        }
        else if (i % 3 == 0) {
            cout << "Fizz!\n";
        }
        else if (i % 5 == 0) {
            cout << "Buzz!\n";
        }
        else {
            cout << i << "\n";
        }
    }

}

