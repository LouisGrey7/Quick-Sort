#include "CQuickSort.h"

void CQuickSort::Swap(int* _a, int* _b)
{
	int temp = *_a;
	*_a = *_b;
	*_b = temp;
}

int CQuickSort::AscendingPartition(int* _array, int _left, int _pivot)
{

	int low = _left - 1;

	int high = _pivot - 1;

	for (int i = _left; i <= high; i++)
	{
		if (_array[i] <= _array[_pivot])
		{
			low++;

			Swap(&_array[low], &_array[i]);

		}
	}

	Swap(&_array[low + 1], &_array[_pivot]);

	return low + 1;
}

int CQuickSort::DescendingPartition(int* _array, int _left, int _pivot)
{

	int low = _left - 1;

	int high = _pivot - 1;

	for (int i = _left; i <= high; i++)
	{
		if (_array[i] >= _array[_pivot])
		{
			low++;

			Swap(&_array[low], &_array[i]);

		}
	}

	Swap(&_array[low + 1], &_array[_pivot]);

	return low + 1;
}

void CQuickSort::AscendingQuickSort(int* _array, int _left, int _pivot)
{
	if (_left < _pivot)
	{
		int newpivot = AscendingPartition(_array, _left, _pivot);


		AscendingQuickSort(_array, _left, newpivot - 1);

		AscendingQuickSort(_array, newpivot + 1, _pivot);
	}
}

void CQuickSort::DecendingQuickSort(int* _array, int _left, int _pivot)
{
	if (_left < _pivot)
	{
		int newpivot = DescendingPartition(_array, _left, _pivot);


		DecendingQuickSort(_array, _left, newpivot - 1);

		DecendingQuickSort(_array, newpivot + 1, _pivot);
	}
}