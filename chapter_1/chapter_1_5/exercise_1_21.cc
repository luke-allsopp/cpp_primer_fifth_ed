#include  <iostream>
#include "Sales_item.h"

int main()
{
    //define the type of the variables to be used
    Sales_item item1, item2;
    
    //read in the 2 sales items to the 2 variables
    std::cin >> item1 >> item2;

    //check that the books in item1 and item2 have the same ISBN
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0; 
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }

}
