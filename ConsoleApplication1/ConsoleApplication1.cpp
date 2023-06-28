#include <iostream>

int main()
{
    std::cout << "Enter A and B: ";
    int A, B;
    std::cin >> A >> B;
    std::cout << "A + B = " << A + B << '\n'
        << "A - B = " << A - B << '\n';
}