#include <iostream>
#include <vector>
#include <string>

int main (void)

{
  std::string number, zero, one, two, three, four, five, six, seven, eigth, nine;
  std::vector <int> numbers = {0,1,2,3,4,5,6,7,8,9};

  std::cout << "Write a number in letters" << "\n";
  std::cin >> number;
  
  if (number == "zero")
    {
      std::cout << numbers [0] << "\n";
    }

  if (number == "one")
    {
      std::cout << numbers [1] << "\n";
    }

  if (number == "two")
    {
      std::cout << numbers [2] << "\n";
    }

  if (number == "three")
    {
      std::cout << numbers [3] << "\n";
    }

  if (number == "four")
    {
      std::cout << numbers [4] << "\n";
    }

  if (number == "five")
    {
      std::cout << numbers [5] << "\n";
    }

  if (number == "six")
    {
      std::cout << numbers [6] << "\n";
    }

  if (number == "seven")
    {
      std::cout << numbers [7] << "\n";
    }

  if (number == "eight")
    {
      std::cout << numbers [8] << "\n";
    }

  if (number == "nine")
    {
      std::cout << numbers [9] << "\n";
    }

}
