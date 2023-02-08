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
		cin.ignore();
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
vector<Products> SortItems(vector<Products>temp)
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
		if (output.size() < temp.size())
			output.push_back(expensive);
		else
			break;
		expensive.Price = 0;
	}
	return output;
}

int main()
{
	State state = Add;
	vector<Products> products;
	Products temp;

	while(true)
	{
		while (state != Exit)
		{
			char input;

			cout << "1 for add 2 for sort 3 for dispaly 4 to exit";
			cin >> input;
			if (input == '1')
				state = Add;
			else if (input == '2')
				state = Sort;
			else if (input == '3')
				state = Display;
			else
				state = Exit;
			switch (state)
			{
			case Add: temp.AddItem(); products.push_back(temp); break;
			case Display: DisplayProducts(products); break;
			case Sort: SortItems(products); break;

			}
		}
	}
	//adding items
	/*while (true)
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
	}*/
    
    
    //Purchase();
    


    return 0;
}

