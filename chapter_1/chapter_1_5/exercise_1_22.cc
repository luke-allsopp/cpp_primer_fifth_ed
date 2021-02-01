#include  <iostream>
#include "Sales_item.h"

int main()
{   
    Sales_item total, item; //declare that item and total are of type Sales_item


    //if the imput can be fed into the new "sales_item" variable
    //then while the input is a sales_type item, compund assign the latest item into total.
    //print out total.

    if ( std::cin >> total ) {
        
        while ( std::cin >> item )
            total += item;
        std::cout << total << std::endl;
        return 0;
    
    // failure condition

    } else { 
        
        std::cout << "ERROR" << std::endl;
        return -1;
    
    }


}
