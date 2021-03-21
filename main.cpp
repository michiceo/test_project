#include <iostream>
#include <vector>

#include "subdirectory/my_class.hpp"

int
main(int argc, char **argv)
{
  MyClass m;
  MyClass m2;

  std::cout << "Hello, world!" << std::endl;
  std::cout << "This is a newly added line." << std::endl;

  return 0;
}
