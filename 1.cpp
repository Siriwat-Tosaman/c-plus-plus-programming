#include <iostream>

int main() {
	int number;
	std::cin >> number;

	bool printed = false;
	if (number % 3 == 0) {
		std::cout << 3;
		printed = true;
	}
	if (number % 5 == 0) {
		if (printed) {
			std::cout << ' ';
		}
		std::cout << 5;
	}

	return 0;
}
