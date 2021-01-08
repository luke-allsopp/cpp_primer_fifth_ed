#include<iostream>

int main ()
{
  std::cout << "Enter two numbers:" << std::endl;
  int x1 = 0, x2 = 0;
  std::cin >> x1 >> x2;
  std::cout << "The Product of " << x1 << " and " << x2 << " is " << x1 * x2 << std::endl;
  return 0;
}
