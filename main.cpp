#include "Sorts.hpp"

int main(int argc, char const *argv[])
{
	Sorts A = Sorts(10);
	/*A.output();
	std::cout << std::endl;
	A.insertionSort();
	std::cout << std::endl;
	A.output();
	std::cout << std::endl;*/
	A.output();
	std::cout << std::endl;
	A.mergeSort();
	std::cout << std::endl;
	A.output();
	getchar();
	return 0;
}