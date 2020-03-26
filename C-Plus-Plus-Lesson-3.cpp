#include <iostream>
#include <string>
using namespace std;
// Declare function
double add(double a, double b);

// Define function
double sub(double a, double b) {
	return a - b;
}

// Define function
double mul(double a, double b) {
	return a * b;
}

// Define function
double div(double a, double b) {
	return a / b;
}

// Recursive function calls itself with updated parameters
int fib(int x) {
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	return fib(x - 1) + fib(x - 2);
}

int main()
{
	for (int i = 0; i < 20; i++) {
		cout << to_string(fib(i)) << " ";
	}
}



// Define function
double add(double a, double b) {
	return a + b;
}