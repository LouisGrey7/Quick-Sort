#pragma once
class CQuickSort
{
private:


public:

	//Functions
	void Swap(int* _a, int* _b);
	int AscendingPartition(int* _array, int _left, int _pivot);
	int DescendingPartition(int* _array, int _left, int _pivot);
	void AscendingQuickSort(int* _array, int _left, int _pivot);
	void DecendingQuickSort(int* _array, int _left, int _pivot);
};

