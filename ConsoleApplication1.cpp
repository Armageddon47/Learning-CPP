#include <iostream>
#include <sstream>

using namespace std;


double product_prices[4];
string product_names[4];
int main()
{
    
   

    for (int i = 0; i < 4; i++)
    {
        cout << " enter product name\n";
        cin >> product_names[i];
        cout << "price?";
        cin >> product_prices[i];

        cout << product_names[i]<<" submited for "<< product_prices[i]<<". next? \n";
    }


    double money;
    cout << "How much money you got bru?\n";
    cin >> money;

	int input = 0;
    while (money > product_prices[3])
    {
        cout << "whatchu wanna buy?\n";
        for (int i =0; i<4; i++)
        {
            cout << i+1 << " : "<<product_names[i] << " : " << product_prices[i]<<"\n";
        }
        cin >> input;
        money = money - product_prices[input - 1];
        cout << " you bought : " << product_names[input - 1] << " for " << product_prices[input - 1] << "\n";
        cout <<"you have : " << money<< "\n";

    }

    return 0;
}

