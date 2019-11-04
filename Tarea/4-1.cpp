#include <iostream>
#include <string>


struct Complex
{
  double x = 0;
  double y = 0;
  double z = 0;
};

void sum (Complex t);
void substract (Complex t);
void multiply (Complex t);
void divide (Complex t);

int main (void)
{
  struct Complex t;

  t.x = 3.5;
  t.y = -4.7;

  sum (t);
  substract (t);
  multiply (t);
  divide (t);

  return 0;
}


void sum (Complex t)
{
  t.z = t.x + t.y;
  std::cout << t.z << "\n"; 
  
}

void substract (Complex t)
{
  t.z = t.x - t.y;
  std::cout << t.z << "\n"; 
  
}

void multiply (Complex t)
{
  t.z = t.x * t.y;
  std::cout << t.z << "\n"; 
  
}

void divide (Complex t)
{
  t.z = t.x / t.y;
  std::cout << t.z << "\n"; 
  
}
