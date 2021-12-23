#include "comb_sort.h"


int* comb_sort(int* arr, int sizeL)
{
	int size = sizeL;
	int* sort_arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		sort_arr[i] = arr[i];
	}

	int range = size - 1;
	int i = 0;

	while (true)
	{
		if (i + range >= size)
		{
			i = 0;
			range--;
		}

		if (sort_arr[i] > sort_arr[i + range])
		{
			int tmp = sort_arr[i + range];
			sort_arr[i + range] = sort_arr[i];
			sort_arr[i] = tmp;
		}

		i++;

		if (range == 0)
		{
			break;
		}
	}

	return sort_arr;
}
