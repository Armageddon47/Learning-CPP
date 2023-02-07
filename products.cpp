#include <iostream>
#include "products.h"

using namespace std;

string productNames[productCount];

	void AddProducts()
	{
		for (int i = 0; i<4;i++)
		{
			cout << "enter product name " << (i + 1) << ": \n";
			cin >> productNames[i];
			cout << "enter product price " << (i + 1) << ": \n";
			cin >> productPrices[i];

		}
	}
	string AddProductName()
	{

	}
	double AddProductPrice()
	{

	}
	void RemoveProducts()
	{

	}

	void SortProducts()
	{

	}
