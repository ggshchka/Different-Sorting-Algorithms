#include "Sorts.hpp"

Sorts::Sorts(int len){
	for (int i = 0; i < len; ++i)
	{
		arr.push_back(rand()%5000);
	}
}

void Sorts::output(){
	for (decltype(arr.size()) i = 0; i < arr.size(); ++i)
	{
		std::cout << arr[i] << " ";
	}
}

void Sorts::insertionSort(){
	for (int i = 1; i < arr.size(); ++i)
	{
		int key = arr[i];
		for (int j = i-1; j >= 0; --j)
		{
			if (arr[j+1] < arr[j])
			{
				arr[j+1]=arr[j];
				arr[j]=key;
			}
		}
			
	}
}

void Sorts::merge(int low, int mid, int high)
{
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= high)
        temp[k++] = arr[j++];
    k--;
    while (k >= 0)
    {
        arr[k + low] = temp[k];
        k--;
    }
}

void Sorts::mergeSortRec(int p, int r){
	if (p<r)
	{
		int q=(p+r)/2;
		mergeSortRec(p,q);
		mergeSortRec(q+1,r);
		merge(p,q,r);
	}
}

void Sorts::mergeSort(){
	mergeSortRec(0, arr.size()-1);
}