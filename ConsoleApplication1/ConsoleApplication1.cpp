#include <iostream>

int main()
{
    std::cout << "Enter A and B: ";
    double A, B;
    std::cin >> A >> B;
    std::cout << "A + B = " << A + B << '\n'
        << "A - B = " << A - B << '\n';
    std::cout << "A * B = " << A * B << '\n';
    std::cout << "A / B = " << A / B << '\n';
    std::cout << "A % B = " << A % B << '\n';
    auto max{ [](int a, int b) {if (a > b) return a; else return b; } };
    std::cout << "Max: " << max(A, B);
}