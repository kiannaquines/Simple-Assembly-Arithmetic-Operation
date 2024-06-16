#include <stdio.h>
#include <iostream>

using namespace std;

#define ASSEMBLY

#ifdef ASSEMBLY
extern "C" int Sum(int a, int b);
extern "C" int Multiply(int a, int b);
extern "C" int Subtraction(int a, int b);
extern "C" int Division(int a, int b);
#else
int Sum(int a, int b) {
	return (a + b);
}

int Multiply(int a, int b) {
	return (a * b);
}

int Subtraction(int a, int b) {
	return (a - b);
}

int Division(int a, int b) {
	return (a / b);
}
#endif

int main() {
	int a, b, sum, mul, sub, div;

	a = 150;
	b = 35;

	sum = Sum(a, b);
	mul = Multiply(a, b);
	sub = Subtraction(a, b);
	div = Division(a, b);

	printf("The sum of the two numbers is %d \n", sum);
	printf("The multiplied result of the two numbers is %d \n", mul);
	printf("The subtracted result of the two numbers is %d \n", sub);
	printf("The divided result of the two numbers is %d \n", div);

	return 0;
}