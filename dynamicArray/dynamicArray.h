#pragma once
#include "dynamicArray.hpp"
template <class T>
class DynamicArray
{
public:
	DynamicArray(const unsigned int _nbElements=100);
	~DynamicArray();
	void setElement(const unsigned int, const T);
	const T& getElement(const unsigned int) const;
	const int getCapacite() const;
	vois setCapacite(const unsigned int);

private:
	DynamicArray(const DynamicArray<T> &);
};
