#include <iostream>


double my_pow(double chislo, unsigned int stepen)
{
    double result = chislo;
    for (unsigned int i; i < stepen; i++)
        result *= chislo;

    return result;
}

int main()
{

}
