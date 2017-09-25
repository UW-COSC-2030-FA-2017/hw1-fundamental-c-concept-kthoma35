//collectionTest.cpp
//Kyle Thomas
//Homework1, Pt 3
//24 Sept. 2017

#include "collection.cpp"

int main()
{
	Collection<int> collection1;
	collection1.print();
	Collection<int> collection2 = Collection<int>(24);
	collection2.print();
	int list[] = { 1,2,3,4,5,6 };
	Collection<int> collection3 = Collection<int>(list, 6);
	collection3.print();
	collection3.remove(3);
	collection3.print();
	collection3.insert(9);
	collection3.print();
	collection3.removeRandom();
	collection3.print();
	collection3.insert(24);
	collection3.print();

	return 0;
}