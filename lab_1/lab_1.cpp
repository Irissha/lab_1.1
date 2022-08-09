#include <iostream> 
#include <math.h> 
using namespace std;

int main() {
	int a = 1000;
	float b, result, d;
	b = 0.0001;
	d = a - b;
	result = ((pow(d, 2)) - (pow(a, 2) - 2 * a * b)) / (pow(b, 2));
	cout << "(float) result = " << result;
	cout << "\n";
	int a_1 = 1000;
	double b_1, result_1, d_1;
	b_1 = 0.0001;
	d_1 = a_1 - b_1;
	result_1 = ((pow(d_1, 2)) - (pow(a_1, 2) - 2 * a_1 * b_1)) / (pow(b_1, 2));
	cout << "(double) result = " << result_1;
	cout << "\n";
	return 0;
}
