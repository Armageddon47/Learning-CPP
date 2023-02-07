#ifndef PRODUCTS_H
#define	PRODUCTS_H

#include <string>
namespace production {
	const int productCount = 4;
	extern std::string productNames[productCount];
	extern double productPrices[productCount];

	void AddProducts();
	void SortProducts();
	void Purchase();

}
#endif
