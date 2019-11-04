#include <fstream>
#include <string>

struct Estudiante

{
  std::string name;
  long id;
  double *notas;
  int n_notas;

};


int main (void)

{
  std::ofstream fout ("1.txt");

  int ne = 2;
  int nn = 5;

  Estudiante Juan;

  Juan.id = 1032509431;
  Juan.n_notas = 5;
  
  double *jnotas = new double [Juan.n_notas] {3.4,2.3,3.5,4.8,5.0};
  delete [] jnotas;

  Estudiante Camilo;

  Camilo.id = 1042698526;
  Camilo.n_notas = 5;
  
  double *cnotas = new double [Camilo.n_notas] {2.8,3.2,4.3,3.9,5.0};
  delete [] cnotas;

   
  fout << "Estudiantes: " << ne << "\n";
  fout << "Notas por estudiante: "<< nn << "\n";
  
  fout << "Nombre: Juan" << "\n";
  fout << "id: " << Juan.id << "\n";
  fout << "Notas:" << "\n";
  fout << jnotas [0] << "\n";
  fout << jnotas [1] << "\n";
  fout << jnotas [2] << "\n";
  fout << jnotas [3] << "\n";
  fout << jnotas [4] << "\n";

  fout << "Nombre: Camilo" << "\n";
  fout << "id: " <<  Camilo.id << "\n";
  fout << "Notas:" << "\n";
  fout << cnotas [0] << "\n";
  fout << cnotas [1] << "\n";
  fout << cnotas [2] << "\n";
  fout << cnotas [3] << "\n";
  fout << cnotas [4] << "\n";


  return 0;
}

