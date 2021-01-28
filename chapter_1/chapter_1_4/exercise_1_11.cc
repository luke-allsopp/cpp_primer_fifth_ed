#include <iostream>

int main()
{
    std::cout << "Enter Lower and upper limits of range to sum:" << std::endl;
    int x1 = 0, x2 = 0;
    std::cin >> x1 >> x2;
    
    if (x1 <= x2) {
        while ( x1 <= x2) {
            std::cout << x1 << std::endl;
            ++x1;
        } 
    } else {
        while (x1 >= x2) {
            std::cout << x1 << std::endl;
            --x1;
        }
    }

    return 0;

}

