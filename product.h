#ifndef PRODUCTS_H
#define	PRODUCTS_H

#include <string>

const int productCount = 4;
extern std::string productNames[productCount];
extern double productPrices[productCount];

void DisplayProducts();
void GetProductNames();

#endif
