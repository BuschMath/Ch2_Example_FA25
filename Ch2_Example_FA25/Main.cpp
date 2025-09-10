#include <iostream>

// Function prototypes
// Function to input customer name
void InputCustomerName();
// Function to output customer name
void OutputCustomerName();


int main()
{
	std::cout << "Customer Information Program" << std::endl;
	InputCustomerName();
	OutputCustomerName();

	return 0;
}

// Function definitions
// Function to input customer name
void InputCustomerName()
{
	std::cout << "Customer Name Entered: " << std::endl;
}

// Function to output customer name
void OutputCustomerName()
{
	std::cout << "Customer Name Output: " << std::endl;
}