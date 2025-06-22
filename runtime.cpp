// Simplified C++ runtime interface for ML hardware accelerator
#include <iostream>
#include <vector>
#include <chrono>

int main() {
    std::vector<float> input = {1.0, 2.0, 3.0};
    std::vector<float> output(input.size());

    for (size_t i = 0; i < input.size(); ++i) {
        output[i] = input[i] * 2.0f;  // Simulated inference computation
    }

    for (float val : output) {
        std::cout << "Output: " << val << std::endl;
    }
    return 0;
}