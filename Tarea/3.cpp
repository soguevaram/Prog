#include <iostream>

int main (void)

{
  int n = 1915100000;
  int *a =  nullptr;

  a = new int [n];

  delete [] a;
  a = nullptr;


}
