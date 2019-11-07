#include <iostream>

const int N =3;
const int M =3;
const int L =3;

int main (void)

{
  int A [N][M] = {0}, B [M][L] = {0}, result [N][L] = {0};

  for (int ii =0; ii < N; ++ii) {
    for (int jj = 0; jj < M; ++jj) {
      if (ii == jj) {
	A [ii][jj] = 1;}
      else {
	A [ii][jj]=0;}
    }
  }

   for (int ii =0; ii < N; ++ii) {
    for (int jj = 0; jj < L; ++jj) {
      B[ii][jj] = ii*L + jj;
    }
   }

   for (int ii = 0; ii < N; ++ii){
     for (int jj = 0; jj < L; ++jj){
       for (int s = 0; s < M; ++s){
	 result [ii][jj] += A[ii][s]*B[s][jj];
	 
       }
     }
   }
   
   std::cout << "Result \n";
   for( int ii = 0; ii < N; ++ii){
     for (int jj = 0; jj < L; ++jj){
       std::cout << result [ii][jj] << " ";
     }
     std::cout << "\n";
     
   }
}
  

  
      
