#include <iostream>
#include <cassert>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int den) {
        assert(den != 0);  // Ensure denominator is not zero
        assert(typeid(num) == typeid(int) && typeid(den) == typeid(int));  // Ensure both numerator and denominator are of type int
        numerator = num;
        denominator = den;
    }

    // Reduce the fraction to lowest terms
    void reduce() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Find the greatest common divisor using Euclidean Algorithm
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Overload the + operator
    Fraction operator+(const Fraction& other) const {
        int resultNum = numerator * other.denominator + other.numerator * denominator;
        int resultDen = denominator * other.denominator;

        Fraction result(resultNum, resultDen);
        result.reduce();
        return result;
    }

    // Override the toString method (equivalent to __str__ in Python)
    std::string toString() const {
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
};

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction sum = fraction1 + fraction2;

    std::cout << "Fraction 1: " << fraction1.toString() << std::endl;
    std::cout << "Fraction 2: " << fraction2.toString() << std::endl;
    std::cout << "Sum: " << sum.toString() << std::endl;

    return 0;
}

