// testPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
int getTotal(int);
int getInput();
int showTotal();
int main()
{ 
	/*main structure
	* 
	*/
	getTotal(getInput());
	showTotal();
	
}

int getInput() {
	/*function details:
	* this gets the input of the user for the max number to add to.
	* example: 13
	* 2
	* 
	*/
	int num;
	std::cout << "this program gets the total added sum of the max number ex:" << std::endl;
	std::cout << "Enter a number must not be negativer:";
	std::cin >> num;
	while (num <0)
	{
		std::cout << num << "is not a valid try anohter number:";
		std::cin >> num;
	}
	return num;
}

int getTotal(int endNum)
{
	int i = 0;
	int counter = 0;
	int total = 0;
	while (i <= endNum)
	{
		if (i % 5 == 0 or i == 0) {
			std::cout << "\n";
			std::cout << std::setfill('-');
			counter += 1;
			std::cout << std::setw(23) << "col " << counter << std::setw(23);
			std::cout << std::setfill('-');
		
		    std::cout << "\n";

		}

		std::cout << "";
		std::cout << "|" << i << "|\t";
		total += i;
		
		i++;

	}
	return total;
	
}
int showTotal() {
	try {
		return 0;
	}
	catch (_EXCEPTION_ int) {
		return 123;
	}
	
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
