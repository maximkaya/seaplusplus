#include <iostream>

int main() {
	int a;
	int b;

	std::cout << "Type first number: ";
	std::cin >> a;
	std::cout << "Type second number: ";
	std::cin >> b;

	int sum = a + b;
	int dif = a - b;
	int ab = a * b;

	std::cout << "A + B: " << sum << std::endl;
	std::cout << "A - B: " << dif << std::endl;
	std::cout << "A * B: " << ab << std::endl;

	return 0;
}
