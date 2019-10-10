#ifndef SORTS_HPP
#define SORTS_HPP
#include <vector>
#include <iostream>
class Sorts
{
private:
	std::vector<int> arr;
public:
	Sorts(int);
	Sorts(){}
	~Sorts(){}
	void output();
	void insertionSort();

	void merge(int,int,int);
	void mergeSortRec(int,int);
	void mergeSort();

};

#endif