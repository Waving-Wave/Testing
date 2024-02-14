#include <iostream>
#include <cmath>
#include <limits>

int main() {
    double a = std::numeric_limits<double>::infinity();
    double x = a * 0;

    if (std::isnan(x)) {
        std::cout << "x is NaN" << std::endl;
    } else {
        std::cout << "x is not NaN" << std::endl;
    }

    return 0;
}
