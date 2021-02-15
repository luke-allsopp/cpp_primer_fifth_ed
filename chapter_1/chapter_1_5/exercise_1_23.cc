//write a program ther reads several transactions and counts how many transactions occur for each ISBN

#include  <iostream>
#include "Sales_item.h"

int main()
{   
    Sales_item curItem, item; //declare that curItem, item are of type Sales_item


    if ( std::cin >> curItem ) {  //read in first of input, if fits in sales_item type curItem, then proceed
        
        int count = 1;  //initialise counter at 1 now that we are reading for just the curItem

        while ( std::cin >> item ) { //while the input is of sales_item type proceed (read in 1st input)
                                     //at this point have read in the first input to both curItem and item (1st iteration)
                                     //on next round, curItem will be same, but item will be read in again hence comparing and counting
                                    

            if (curItem.isbn() == item.isbn()) //if the curItem isbn == latest item read in's isbn, increment count up 1

                ++count;

            else { //else if there no more if that isbn, print the count in HR format to cout

                std::cout << curItem.isbn() << " Occurs " << count << " Times." << std::endl;

                curItem = item; //make the curItem = item to prepare for the next iteration

                count = 1; //reset count to 1 to match while loop conditions
            }
        }
        //need to manually send EOF once done inputing
        //ctrl d or z?
        return 0;

    } else { //if cin input is not of sales_item type give error
        
        std::cout << "ERROR" << std::endl;
        
        return -1;
    
    }


}
