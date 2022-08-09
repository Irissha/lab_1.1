#include <iostream>
using namespace std;
int main() {
	int a = 1000;
	float b = 0.0001, c, d, result;
	d = 2;
	c = a - b;
	result = ((pow(c, d) - (pow(a, d) * d * a * b)) / pow(b, d));
		cout << result << endl;
	return 0;
}
