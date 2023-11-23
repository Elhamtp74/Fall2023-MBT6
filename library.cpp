#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include <vector>

int main() {
    // File I/O using fstream
    std::fstream file("example.txt", std::ios::out | std::ios::app); // Open file for writing

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    file << "Hello, C++ Standard Library!" << std::endl;
    file.close(); // Close the file

    // Random number generation using random
    std::random_device rd; // Seed for the random number generator
    std::mt19937 gen(rd()); // Standard Mersenne Twister engine
    std::uniform_int_distribution<> dis(1, 100); // Distribution from 1 to 100

    int randomNumber = dis(gen);

    std::cout << "Random Number: " << randomNumber << std::endl;

    // Chrono for measuring time
    auto start = std::chrono::high_resolution_clock::now();

    // Perform some time-consuming operation
    for (int i = 0; i < 1000000; ++i) {
        // Some operation
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Time taken by operation: " << duration.count() << " microseconds" << std::endl;

    // Vector for managing a dynamic array
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Adding elements to the vector
    numbers.push_back(6);
    numbers.push_back(7);

    // Accessing vector elements using vector.at
    std::cout << "Vector Elements: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
