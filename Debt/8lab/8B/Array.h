#pragma once
#include <iostream>
template <class Type>
class Array
{
public:
	Array();
	~Array();

	void fillElement(int, Type);
	Type sumElement();
	double average();
	void print();

	void setIndex(int);
	int getIndex();

	Type& operator[](const int index);
private:
	Type* array;
	int size;
	int ind;
};

template<class Type>
inline Array<Type>::Array()
{
	size = 100;
	ind = 0;
	array = new Type[size];
}

template<class Type>
inline Array<Type>::~Array()
{
	delete [] array;
	std::cout << "Destructor" << std::endl;
}

template<class Type>
inline void Array<Type>::fillElement(int i, Type value)
{
	array[i] = value;
}

template<class Type>
inline Type Array<Type>::sumElement()
{
	Type sum = 0;
	for (int q = 0; q < ind; ++q) {
		sum += array[q];
	}
	return sum;
}

template<class Type>
inline double Array<Type>::average()
{
	double sum = 0.0;
	for (int q = 0; q < ind; ++q) {
		sum += array[q];
	}
	sum /= ind;
	return sum;
}

template<class Type>
inline void Array<Type>::print()
{
	for (int q = 0; q < ind; ++q) {
		std::cout << array[q] << " ";
	}
	std::cout << std::endl;
}

template<class Type>
inline void Array<Type>::setIndex(int _ind)
{
	ind = _ind;
}

template<class Type>
inline int Array<Type>::getIndex()
{
	return ind;
}

template<class Type>
inline Type& Array<Type>::operator[](const int index)
{
	Type max = 0;
	try {
		for (int q = 0; q <= index; ++q) {
			if (index > ind) throw -1;
			if (array[q] > max) max = array[q];
		}
	}
	catch (int a) { std::cout << "Result of running function: " << a << ". Out of range error." << std::endl; max = -1; }
	return max;
}
