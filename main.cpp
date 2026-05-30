#include <iostream>
#include <vector>
#include <random>

int main() {
    std::vector<std::string> messages = {
        "Hello World",
        "Random Project",
        "GitHub C++ Test",
        "Sample Repository"
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, messages.size() - 1);

    std::cout << messages[dis(gen)] << std::endl;
    return 0;
}
