//collection.h
//Kyle Thomas
//Homework1, Pt 3
//24 Sept. 2017

#include "collection.h"

template<class T>
Collection<T>::Collection()
{
	length = 0;
	stuff = new T[0];
}

template<class T>
Collection<T>::Collection(int l)
{
	length = l;
	stuff = new T[l];
}

template<class T>
Collection<T>::Collection(T list[], int size)
{
	length = size;
	stuff = list;
}

template<class T>
void Collection<T>::makeEmpty()
{
	for (int i(0); i < length; i++)
	{
		stuff[i] = NULL;
	}
}

template<class T>
void Collection<T>::insert(T thing)
{
	for (int i(0); i < length; i++)
	{
		if (stuff[i] == NULL)
		{
			stuff[i] = thing;
			return;
		}
	}
	stuff = new T[length + 1];
	length++;
	stuff[length - 1] = thing;
}
//not sure if this is a good way to insert a new element
//is there a way to append an array?

template<class T>
void Collection<T>::remove(T thing)
{
	for (int i(0); i < length; i++)
	{
		if (stuff[i] == thing)
		{
			stuff[i] = NULL;
		}
	}

}

template<class T>
void Collection<T>::removeRandom()
{
	stuff[rand() % length] = NULL;
}

template<class T>
bool Collection<T>::notContained(T obj)
{
	for (int i(0); i < length; i++)
	{
		if(stuff[i] = obj)
		{
			return false;
		}
	}
	return true;
}

template<class T>
void Collection<T>::print()
{
	cout << "Length:	" << length << endl;
	cout << "Contents:	";
	for (int i(0); i < length; i++)
	{
		cout << stuff[i] << ", ";
	}
	cout << endl << endl;
}
