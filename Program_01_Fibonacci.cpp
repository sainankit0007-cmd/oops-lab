// Author: [Ankit Sain 241467]
#include <iostream>
using namespace std;

/*
Function Name: fib
Purpose: Calculates the nth Fibonacci number using recursion
Args:
 - int n: The term index to calculate
Return Type: int
*/
int fib(int n) {
    // Base case: 0th and 1st terms are 0 and 1
    if (n <= 1)
        return n;
    // Recursive step: sum of previous two terms
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int limit;
    cout << "Enter number of terms: ";
    cin >> limit;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < limit; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}