//write a for loop thatsums numbers from 50 to 100 inclusive.

#include <iostream>

int main()
{

    int sum = 0;

    for ( int i = 50; i <= 100; ++i )
        sum += i;

    std::cout << "the sum of 50 to 100 inclusive is: " << sum << std::endl;

    return 0;
}
