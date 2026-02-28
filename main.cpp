#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    long long N;
    std::cout << "Enter the upper limit (e.g., 100 for range 1-100): ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    double totalGuesses = 0;
    long long accountedFor = 0;
    long long currentLevel = 1;      // How many guesses (1, 2, 3...)
    long long nodesAtLevel = 1;      // How many numbers fall into this level (1, 2, 4, 8...)

    while (accountedFor < N) {
        // If the remaining numbers are fewer than the current power of 2
        long long numbersToAdd = std::min(nodesAtLevel, N - accountedFor);
        
        totalGuesses += (double)numbersToAdd * currentLevel;
        accountedFor += numbersToAdd;
        
        currentLevel++;
        nodesAtLevel *= 2; // Next level has twice as many possible nodes
    }

    double expectedValue = totalGuesses / N;
    int worstCase = currentLevel - 1;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Results for Range 1 to " << N << " ---" << std::endl;
    std::cout << "Expected (Average) Tries: " << expectedValue << std::endl;
    std::cout << "Worst Case Tries:        " << worstCase << std::endl;

    return 0;
}
