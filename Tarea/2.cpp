#include <iostream>

int main (void)

{
  //Un puntero a un char

  const char *name = "Sofia";

  //Un arreglo de 10 elementos
  
  int a [10] = {1,2,3,4,5,6,7,8,9,10};

  //Puntero a un arreglo con memoria dinámica
    
  int *b = new int [10] {1,2,3,4,5,6,7,8,9,10}; 
  delete [] b;

  //Un puntero a un arreglo de 10 enteros

  int c [10] = {1,2,3,4,5,6,7,8,9,10};
  int *prtc;
  prtc = c;

  //Puntero a un arreglo de char
 
  const char *d [3] = {"Jose", "Maria", "Sara"} ;

  //Puntero a una constante int

  const int e = 1;
  const int *f = &e;

  //Puntero constante a un int

  int g = 2;
  int *const h = &g;
  
  
  return 0;

}
