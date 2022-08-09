#include <iostream>
#include <сmath> //iostream как для ввода и вывода( это если просто), а cmath позволяет удобно работать с математикой
using namespace std; // чтобы не писать std постоянно
int main(int argc, const char* argv[]) {
    int a = 1000;
    float b = 0.0001, c, d, result; //double поменять на него для 2 части задания 
    d = 2;
    c = a - b;
    result = ((pow(c, d) - (pow(a, d) * d * a * b)) / pow(b, d))
        cout << result << endl; //вывод
    return 0;
}
