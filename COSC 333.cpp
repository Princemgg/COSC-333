#include <iostream>
#include <ctime> // Replacing chrono with ctime for compatibility

using namespace std;

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Function to calculate Fibonacci recursively
unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n_factorial, n_fibonacci;

    // Get input from user
    cout << "Enter a number to calculate its factorial: ";
    cin >> n_factorial;
    cout << "Enter a position for Fibonacci sequence: ";
    cin >> n_fibonacci;

    // Measuring runtime for factorial using clock()
    clock_t start_factorial = clock();
    unsigned long long factorial_result = factorial(n_factorial);
    clock_t end_factorial = clock();
    double duration_factorial = double(end_factorial - start_factorial) / CLOCKS_PER_SEC;
    cout << "Factorial of " << n_factorial << " is " << factorial_result << ". Calculated in "
         << duration_factorial << " seconds." << endl;

    // Measuring runtime for Fibonacci using clock()
    clock_t start_fibonacci = clock();
    unsigned long long fibonacci_result = fibonacci(n_fibonacci);
    clock_t end_fibonacci = clock();
    double duration_fibonacci = double(end_fibonacci - start_fibonacci) / CLOCKS_PER_SEC;
    cout << "Fibonacci number at position " << n_fibonacci << " is " << fibonacci_result << ". Calculated in "
         << duration_fibonacci << " seconds." << endl;

    return 0;
}
