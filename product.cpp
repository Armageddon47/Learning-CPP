#include <iostream>
#include "products.h"

using namespace std;

string productNames[productCount];
double productPrices[productCount];
namespace production
{


	void AddProducts()
	{
		for (int i = 0; i < 4; i++)
		{
			cout << "enter product name " << (i + 1) << ": \n";
			cin >> productNames[i];
			cout << "enter product price " << (i + 1) << ": \n";
			cin >> productPrices[i];
			cout << productNames[i] << " submited for " << productPrices[i] ;
			if (i < 3)
				".next ? \n";
		}
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
				cout << productPrices[0] << productPrices[1] << productPrices[2] << productPrices[3];
				break;
			}
			else
			{
				cout << "sorting \n";
			}
		}


	}

	void Purchase()
	{

		double money;
		cout << "How much money you got bru?\n";
		cin >> money;

		int input = 0;

		while (money > productPrices[3])
		{
			cout << "whatchu wanna buy?\n";
			for (int i = 0; i < 4; i++)
			{
				cout << i + 1 << " : " << productNames[i] << " : " << productPrices[i] << "\n";
			}
			cin >> input;
			money = money - productPrices[input - 1];
			cout << " you bought : " << productNames[input - 1] << " for " << productPrices[input - 1] << "\n";
			cout << "you have : " << money << "\n";
		}
	}
}