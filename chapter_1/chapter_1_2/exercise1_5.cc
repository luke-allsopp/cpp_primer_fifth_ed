//ex1_4 rewritten to use a seperate statement to print each operand:

#include<iostream>

int main ()
{
  std::cout << "Enter two numbers:" << std::endl;
  int x1 = 0, x2 = 0;
  std::cin >> x1 >> x2;
  //std::cout << "The Product of " << x1 << " and " << x2 << " is " << x1 * x2 << std::endl;
  std::cout << "The Product of " <<std::endl;
  std::cout << x1  <<std::endl;
  std::cout << " and "  <<std::endl;
  std::cout << x2  <<std::endl;
  std::cout << " is: " <<std::endl;
  std::cout << x1 * x2 <<std::endl;

  return 0;
}
