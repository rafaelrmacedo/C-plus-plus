#include <cmath>
#include <iostream>
#include <ranges>

using namespace std::views;

double f(double t)
{
    return sqrt(abs(t)) + 5 * pow(t, 3);
}

int main()
{
    double a[11];
    for (auto& t : a)
        std::cin >> t;

    for (int i : iota(0, 11) | reverse) {
        if (auto y = f(a[i]); y > 400)
            std::cout << i << " TOO LARGE" << std::endl;
        else
            std::cout << i << ' ' << y << std::endl;
    }
}