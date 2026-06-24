// check if a number is prime using loop
#include <iostream>
int main() {
    int n, isPrime = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (n <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }
    if (isPrime) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }
    return 0;
}