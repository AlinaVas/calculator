#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div (double a, double b)
{
    if (!b)
    {
        std::cout << "Error: dividing by 0" << std::endl;
        return -1;
    }
    return a / b + 0.5;
}
