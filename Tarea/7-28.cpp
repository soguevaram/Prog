#include <iostream>
#include <string>

const int n = 5;

void testPalindrome (char palabra [n]);

int main (void)

{
  char palabra [5];

  std::cout << "Escriba una palabra" << "\n";
  std::cin >> palabra;

  testPalindrome(palabra);

  return 0;
}

void testPalindrome (char palabra [n])

{
  char arbalap [n];
  
  
  for (int ii = 0, jj = n-1; ii < n; ++ii, jj--)
    {
       arbalap[ii] =  palabra[jj];
    }
  
  std::cout << arbalap << std::endl;
  return;
}
  



