// Lab 7 — Johan Zuniga
// CIS 5 Week 07 · Two arrays

#include <iostream>

int main() {
    const int N = 5;
    int quiz[N] = {88, 92, 70, 95, 81};
    int lab[N] = {70, 70, 70, 70, 70};

    int sum = 0;
    int hi = quiz[0];

    std::cout << "Quiz\n";

    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << quiz[i] << "\n";
        sum += quiz[i];

        if (quiz[i] > hi) {
            hi = quiz[i];
        }
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "High: " << hi << "\n";

    sum = 0;
    hi = lab[0];

    std::cout << "Lab\n";

    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << lab[i] << "\n";
        sum += lab[i];

        if (lab[i] > hi) {
            hi = lab[i];
        }
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "High: " << hi << "\n";

    return 0;
}
