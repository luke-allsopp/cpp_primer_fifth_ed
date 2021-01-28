//indicate which if any statements is legal; then compile a program that uses all:
  //std::cout << "/*";
  //std::cout << "*/";
  //std::cout << /* "*/" */; -> illegal
  //std::cout << /* "*/" /* "/*" */;  -> illegal

#include<iostream>

int main()
{
std::cout << "Statement 1 is legal as is: " << "/*" << std::endl;
std::cout << "Statement 2 is legal as is: " << "*/" << std::endl;
std::cout << "Statement 3 is illegal as is - corrected: " << /* "*//*" */ "<- should now be commented out correctly" << std::endl;
std::cout << "Statement 4 is illegal as is - corrected: " << std::endl;  // << "*/"  "/*"  
std::cout << "above should now be commented out correctly" << std::endl;

return 0;
}
