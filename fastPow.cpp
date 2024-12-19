#include <iostream>
using namespace std;


double fast_pow(double value, int pow) {

	double result = 1;
	while (pow > 0) {
		if (pow % 2)
			result *= value;
		value *= value;
		pow /= 2;
		return result;
	}
}

int main() {


}