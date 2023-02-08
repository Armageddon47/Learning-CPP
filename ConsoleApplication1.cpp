#include <iostream>
#include <sstream>
#include <vector>
#include "product.h"
using namespace std;
using namespace production;

enum State
{
	Add,
	Sort,
	Display,
	Exit
};

struct Products
{
	string Name;
	double Price;


	Products AddItem()
	{
		Products temp;

		cout << "Product Name\n";
		getline(cin, temp.Name);

		cout << "Price?\n";
		cin >> temp.Price;
		cout << temp.Name << "\t" << temp.Price << "Added";
		return temp;
	}




};

void DisplayProducts(vector<Products>temp)
{
	
	int i = 0;
	while (i<temp.size())
	{
		cout << "Name :" << temp[i].Name << " Price :" << temp[i].Price;
		i++;
	}
}
Products SortItems(vector<Products>temp)
{
	int i = 0;
	Products expensive = temp[0];
	vector<Products>output;
	while (true)
	{
		for (i = 0; i<temp.size();i++)
		{
			if (temp[i].Price>expensive.Price)
			{
				expensive = temp[i];
			}
		}
		output.push_
	}
}
int main()
{
	State state = Display;
	vector<Products> products;

	//adding items
	while (true)
	{
		Products temp;
		char input;
		cout << "wanna enter products? y/n \n";
		cin >> input;
		if (input == 'y')
		{
			temp.AddItem();
			products.push_back(temp);
		}
		else
			break;
	}
    
    SortProducts();
    Purchase();
    


    return 0;
}

