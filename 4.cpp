// reverse a number usinng loop
#include <iostream>
int main() {
    int n, reversed = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    std::cout << "Reversed number is: " << reversed << std::endl;
    return 0;
}