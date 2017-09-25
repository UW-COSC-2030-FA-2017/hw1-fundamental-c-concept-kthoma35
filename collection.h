//collection.h
//Kyle Thomas
//Homework1, Pt 3
//24 Sept. 2017

#ifndef COLLECTION_H
#define COLLECTION_H

#include "math.h"
#include <iostream>
using std::cout;
using std::endl;

template <class T> class Collection
{
public:
	Collection();
	Collection(int l);
	Collection(T list[], int size);

	~Collection() {};

	void makeEmpty();

	void insert(T thing);

	void remove(T thing);

	void removeRandom();

	bool notContained(T obj);

	void print();
private:
	int length;
	T* stuff;
};

#endif