#include <iostream>

int main()
{
    int sum = 50, val = 51;

    while ( val <= 100 ) {
        sum += val;
        ++val;
    }

    std::cout << "sum of 50 to 100 inclusice = " << sum << std::endl;

    return 0;
}
