#include <iostream>
#include <string>


int main() {
    int b;
    std::cout << "Enter your row items: " << std::endl;
    std::cin >> b;
   for (int i = 0; i < b; i++) {
        int spaces = b - i - 1;
        int stars = 2 * i + 1;
        std::string line = std::string(spaces, ' ') + std::string(stars, '*');
        std::cout << line << std::endl;
    }



    for (int i = b - 1; i>= 0; i--) {
        int spaces = b - i - 1;
        int stars = 2 * i + 1;
        std::string line = std::string(spaces, ' ') + std::string(stars, '*');
        std::cout << line << std::endl;
    }

    return 0;
}
