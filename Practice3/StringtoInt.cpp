#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter a PIN Number: ";
    std::string pinStr;
    while (std::getline(std::cin, pinStr) && pinStr.size() != 4) {
        std::cout << "Please enter a valid value\n";
    }
    std::vector<int> pin;
    pin[0] = pinStr[0] - '0';
    pin[1] = pinStr[1] - '0';
    pin[2] = pinStr[2] - '0';
    pin[3] = pinStr[3] - '0';

    //pin now holds the integer value.
    for (auto& i : pin)
        std::cout << i << ' ';
}
