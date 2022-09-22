#include <iostream> 
#include <math.h> 
using namespace std;

int main()
{
	float a, b, result, d;
	a = 1000;
	b = 0.0001;
	d = a - b;
	
	result = ((pow(d, 2)) - (pow(a, 2) - 2 * a * b)) / (pow(b, 2));
	cout << "(float) result = " << result << "\n";
	
	double b_1, result_1, d_1, a_1;
	a_1 = 1000;
	b_1 = 0.0001;
	d_1 = a_1 - b_1;
	
	result_1 = ((pow(d_1, 2)) - (pow(a_1, 2) - 2 * a_1 * b_1)) / (pow(b_1, 2));
	cout << "(double) result = " << result_1 << "\n";
	
	return 0;
}
