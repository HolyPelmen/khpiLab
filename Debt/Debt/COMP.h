#pragma once
#include <math.h>

template <class T>
class COMP
{
public:
	COMP();
	COMP(T, T);
	~COMP();

	double getComp();
private:
	double i = -1;
	double compNum;
};

template<class T>
inline COMP<T>::COMP()
{
	compNum = 0;
}

template<class T>
inline COMP<T>::COMP(T a, T b)
{
	compNum = a + ((b * b) * i);
}

template<class T>
inline COMP<T>::~COMP()
{
}

template<class T>
inline double COMP<T>::getComp()
{
	return compNum;
}