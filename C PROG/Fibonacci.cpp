#include <iostream>
using namespace std;

int main() {
    int N;

    std::cin >> N;

    for (int i = 1; i <= 12; ++i) {
        std::cout << N << " * " << i << " = " << N * i << std::endl;
    }

    return 0;
}
