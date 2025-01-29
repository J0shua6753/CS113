#include <iostream>

using namespace std;

// Recursive function to sum the first n terms of the arithmetic progression
// The sequence follows the pattern: 4, 7, 10, 13, ... (common difference = 3)
int SumProg(int n) {
    // Base case: when n is 1, return the first term of the sequence
    if (n == 1) {
        return 4;
    }
    // Recursive case: sum of the first n terms is the nth term + sum of previous terms
    return prog(n) + SumProg(n - 1);
}

// Function to compute the nth term of the arithmetic sequence
// Formula: a_n = 4 + (n-1) * 3
int prog(int n) {
    return 4 + 3 * (n - 1);
}

int main() {
    // Loop to print the first 5 terms of the sequence
    for (int i = 1; i <= 5; i++) {
        cout << prog(i) << " ";
    }
    cout << endl;

    // Compute and print the sum of the first 43 terms of the sequence
    cout << "Sum of first 43 terms: " << SumProg(43) << endl;
    
    return 0;
}
