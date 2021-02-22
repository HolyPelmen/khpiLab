#include <iostream>
#include <cassert>

template <typename T>
T min(T *array, int size);

template <typename T>
void sort(T *array, int size);

template <typename T>
T sum(T *array, int size);

const int size = 10, size2 = 4;

int main() {

	{
		int arr1[size2] = { 15, 5, 10, 1 };
		int arr2[size2] = { -10, -30, -5, -15 };
		int arr3[size2] = { 121, -134, 41, -2 };

		int t = min(arr1, size2);
		assert(t == 1);
		t = min(arr2, size2);
		assert(t == -30);
		t = min(arr3, size2);
		assert(t == -134);
	}

	{
		int arr4[size] = { 9, 7, 3, 6, 5, 4, 8, 2, 1, 0 };
		int arr5[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		sort(arr4, size);
		for (size_t i = 0; i < size; i++)
		{
			assert(arr4[i] == arr5[i]);
		}
	}

	{
		int arr6[size] = { 0, -1, 2, -3, 4, -5, 6, -7, 8, -9 };
		int s = sum(arr6, size);
		assert(s == 20);
	}

    return 0;
}

template <typename T>
T min(T *array, int size) {
	T min = array[0];
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < min) min = array[i];
	}
	return min;
}

template <typename T>
void sort(T *array, int size) {
	T temp;
	for (size_t j = 0; j < size-1; j++)
	{
		for (size_t i = 0; i < size - j -1; i++)
		{
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	
}

template <typename T>
T sum(T *array, int size) {
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > 0)
			sum += array[i];
	}
	return sum;
}