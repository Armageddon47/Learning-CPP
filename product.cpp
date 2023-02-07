#include <iostream>
#include "products.h"

using namespace std;

string productNames[productCount];

void AddProducts()
{
	for (int i = 0; i<4; i++)
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
	string temp;
	double dtemp;
	while (true)
	{
		if (productPrices[2] < productPrices[3])
		{

			dtemp = productPrices[2]; productPrices[2] = productPrices[3];
			productPrices[3] = dtemp;
			temp = productNames[2]; productNames[2] = productNames[3];
			productNames[3] = temp;
		}
		if (productPrices[1] < productPrices[2])
		{
			dtemp = productPrices[1]; productPrices[1] = productPrices[2];
			productPrices[2] = dtemp;
			temp = productNames[1]; productNames[1] = productNames[2];
			productNames[2] = temp;
		}
		if (productPrices[0] < productPrices[1])
		{
			dtemp = productPrices[0]; productPrices[0] = productPrices[1];
			productPrices[1] = dtemp;
			temp = productNames[0]; productNames[0] = productNames[1];
			productNames[1] = temp;
		}
		if (productPrices[0] > productPrices[1] && productPrices[1] > productPrices[2] && productPrices[2] > productPrices[3])
		{
			break;
		}
		else
		{
			cout << "sorting \n";
		}
	}

	
}
