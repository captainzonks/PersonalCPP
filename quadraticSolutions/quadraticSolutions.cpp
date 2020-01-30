// quadraticSolutions.cpp
// 2020-01-30
// find solutions to quadratic equation

#include <iostream>
#include <cmath>

void discriminant(double a, double b, double c)
{
    double discriminant{ b * b - 4 * a * c };

    std::cout << std::endl;
    std::cout << "-(" << b << ") +|- sqrt(" << b << "^2" << " - 4 * " << a << " * " << c << ") " << std::endl;
    std::cout << "_______________________________________" << std::endl;
    std::cout << "              (2 * " << a << ")" << std::endl;
    std::cout << std::endl;
    std::cout << "Discriminant: " << discriminant << " = " << b << "^2" << " - 4 * " << a << " * " << c << std::endl;

    if (discriminant > 0)
    {
        double x1{ (-b + sqrt(discriminant)) / (2 * a) };
        double x2{ (-b - sqrt(discriminant)) / (2 * a) };
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    if (discriminant == 0)
    {
        double x1{ (-b + sqrt(discriminant)) / (2 * a) };
        std::cout << "Roots are real and the same." << std::endl;
        std::cout << "x1 = x2 = " << x1 << std::endl;
    }
    if (discriminant < 0)
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different." << std::endl;
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main()
{
    double a{}, b{}, c{};

    std::cout << "============Quadratic Solver============" << std::endl;
    std::cout << "Please enter three values separated by spaces: ";
    std::cin >> a >> b >> c;

    discriminant(a, b, c);

    return 0;
}

