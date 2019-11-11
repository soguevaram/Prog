#include <iostream>
#include <vector>

int main (void)
{
  std::vector <double> cities = {234523.56,1543476.6,36543.6,325.6};

  double sum = 0.0;
  double average = 0.0;
  
  for (double ii = 0; ii < cities.size(); ++ii)
    {
      sum += cities [ii];
      average = sum/cities.size();
    }

  double mayor = 0.0;
  double menor = 0.0;

  for (double ii = 0; ii < cities.size (); ++ii)
    {
      if (cities [ii] > mayor)
	{
	  mayor = cities [ii];
	}
    }
  
  for (double ii = 0; ii < cities.size (); ++ii)
    {
      menor = cities [ii];
      
      if (cities [ii] < menor)
	{
	  menor = cities [ii];
	}
    }

  std::cout << sum << "\n";
  std::cout << mayor << "\n";
  std::cout << menor << "\n";
  std::cout << average << "\n";
  
  
  return 0;
  
}

