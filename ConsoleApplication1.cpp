#include <iostream>
#include <sstream>
#include "product.h"

using namespace std;
using namespace production;

double product_prices[4];
string product_names[4];
int main()
{
    
    cout << "Welcome\n";
    AddProducts();
    SortProducts();
    Purchase();


    return 0;
}

