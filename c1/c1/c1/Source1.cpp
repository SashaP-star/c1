#include <iostream>
int main()
{
	int a = 1;
	int b;
	std::cout << a;
	std::cout << "Input value a: ";

	std::cin >> a;
	std::cout << "\nInput value b:";
	std::cin >> b;
	std::cout << "you input " << a + b;


	return 0;
}