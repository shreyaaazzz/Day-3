// count the digits in a number using loop
#include <iostream>
int main() {
     int n, count = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    std::cout << "Number of digits is: " << count << std::endl;
    return 0;
}
