#pragma once

template <class Type>
class Num
{
public:
	Num();
	Num(Type);
	~Num();

	Type getNum();
	
	friend Num operator/(const Num& _left, const Num& _right) { return (_left.a / _right.a); }
private:
	Type a;
};

template<class Type>
inline Num<Type>::Num()
{
	a = 0;
}

template<class Type>
inline Num<Type>::Num(Type _a)
{
	a = _a;
}

template<class Type>
inline Num<Type>::~Num() {}

template<class Type>
inline Type Num<Type>::getNum()
{
	return a;
}

