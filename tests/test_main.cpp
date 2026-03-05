#include <iostream>

int main() {
    const int a = 2;
    const int b = 2;

    if (a + b != 4) {
        std::cerr << "Test failed: expected 4, got " << (a + b) << std::endl;
        return 1;
    }

    std::cout << "All tests passed." << std::endl;
    return 0;
}
