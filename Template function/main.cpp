#include <iostream>

template<typename T, typename P>
T sum(T& a, P& b);

int main() {
    int a = 6;
    double b = 8.2;
    std::cout << a << " " << b << '\n';
    sum(a, b);
    std::cout << sum(a, b);
    return 0;
}

template<typename T, typename P>
T sum(T& a, P& b) {
    return a + b;
}
