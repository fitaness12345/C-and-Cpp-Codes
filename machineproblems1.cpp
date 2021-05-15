#include <iostream>

float n1, n2;
float sum;

void myName(void)
{
	std::cout << "Lourenz Baliber";
}

int main()
{	
	// myName
	std::cout << "\n-------------------------- MACHINE PROBLEMS 1 ---------------------------------" << std::endl;
	std::cout << "My name is:" << std::endl;
	myName();
	
	// Input numbers
	std::cout << std::endl <<"\nEnter first number:\n";
	std::cin >> n1;
	std::cout << "Enter second number:\n";
	std::cin >> n2;
	
	// Swap and Sum
	std::cout << std::endl;
	std::cout << "Your first number is:\n" << n1 << std::endl << "Your second number is:\n" << n2 <<  std::endl;
	std::cout << "\nSwapped:\n" << "First number:\n"<< n2 <<std::endl << "Second number:\n" << n1 << std::endl;
	sum = n1 + n2;
	std::cout << "\nSum:" << std::endl;
	std::cout << "The sum of the numbers is equal to:\n" << sum << std::endl;
	
	return 0;
}


