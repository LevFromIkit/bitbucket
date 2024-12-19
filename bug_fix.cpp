#include <iostream>
using namespace std;

double my_pow(double chislo, unsigned int stepen)
{
    double result = chislo;
    for (unsigned int i = 1; i < stepen; i++)
        result *= chislo;

    return result;
}

int main()
{
    cout << my_pow(-2, 4);
}