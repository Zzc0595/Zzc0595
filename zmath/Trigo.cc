#include <iostream>

const double pi = 3.14159;

// pwr :幂级数
long double pwr(double x, int n) {
    long double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
//
long double fct(int n) {
    long double result = 1.0;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sin(double x) {
    // 先将x转换到[-π, π]区间，提高精度
    while (x > pi) x -= 2 * pi;
    while (x < -pi) x += 2 * pi;
    
    double result = 0.0;
    for (int i = 0; i <= 10; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;  // 交替符号
        double term = sign * pwr(x, 2*i + 1) / fct(2*i + 1);
        result += term;
    }
    return result;
}

int main() {
    double angle = (pi / 6)+4*pi;  // 30度
    std::cout << "sin(" << angle << ") = " << sin(angle) << std::endl;
    return 0;
}