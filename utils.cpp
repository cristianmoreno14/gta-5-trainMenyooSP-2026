#include <iostream>
#include <string>
#include <algorithm>

std::string reverseText(const std::string& text) {
    std::string result = text;
    std::reverse(result.begin(), result.end());
    return result;
}

void printBanner() {
    std::cout << "==================" << std::endl;
    std::cout << "  Utility Module  " << std::endl;
    std::cout << "==================" << std::endl;
}
