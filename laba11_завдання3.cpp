#include <iostream>

int main() {
    int n, m;
    std::cout << "Enter the size of array x: ";
    std::cin >> n;
    std::cout << "Enter the size of array y: ";
    std::cin >> m;

    int* x = new int[n];
    int* y = new int[m];

    std::cout << "Enter elements of array x: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
    }

    std::cout << "Enter elements of array y: ";
    for (int i = 0; i < m; ++i) {
        std::cin >> y[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (x[i] == y[0]) {
            bool match = true;
            for (int j = 0; j < m; ++j) {
                if (i + j >= n || x[i + j] != y[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                ++count;
            }
        }
    }

    std::cout << "The first element of array y appears " << count << " times in array x." << std::endl;

    delete[] x;
    delete[] y;

    return 0;
}
