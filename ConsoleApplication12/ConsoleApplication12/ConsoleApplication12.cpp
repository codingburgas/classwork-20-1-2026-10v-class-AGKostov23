#include "../Project1/calc.h"
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	cout << add1(x, y) << endl;
	cout << subtract(x, y) << endl;
	cout << multiply(x, y) << endl;
	cout << divide(x, y) << endl;
}
