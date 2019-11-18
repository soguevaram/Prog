#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>

const double W = M_PI;
const double TF = 6;
const double X0 = 3.21;
const double V0 = 0.0;
const int DIM = 2;

void euler(std::vector<double> & data, double t, double h);
void rk4(std::vector<double> & data, double t, double h);
double f(int idx, double t, const std::vector<double> & y);

int main(void)

{
  std::ofstream fout("1.txt");
  fout.precision(15); fout.setf(std::ios::scientific);
  double H = 0.0;
  std::vector <double> y = {X0,V0};

  double sol = 3.21*std::cos(6*M_PI);

  for (int ii = 0; ii <= 14; ++ii)
    {
      H = std::pow(0.5,ii);

      
      fout << H << "\t";

      y = {X0,V0};
    
      euler(y, TF,H);

      

      fout << std::fabs(sol- y[0])/(sol) << "\t";
      y = {X0,V0};
      
      rk4 (y, TF, H);
      fout << std::fabs(sol- y[0])/(sol) << "\n"; 
      
    }

  fout.close();
  return 0;
}

double f(int idx, double t, const std::vector<double> & y)
{
  if (0 == idx){
    return y[1];
  }
  else if (1 == idx) {
    return -W*W*y[0];
  }
  else {
    std::cerr << "Error" << idx << std::endl;
    exit (1);
  }		     
}

void euler(std::vector<double> & data, double t_f, double h)
{
  double paso = t_f/h;
  std::vector<double> datatmp = data;  
  for (int i = 0; i < paso; ++ i){ 
  double t = h*i; 
  for(int ii = 0; ii < data.size(); ++ii) {
    data[ii] = data[ii] + h*f(ii, t, datatmp);  
    
  }
  datatmp = data;
  }

}

void rk4(std::vector<double> & data, double t_f, double h){
  double paso = t_f/h;
  for (int i = 0; i < paso; ++ i){ 
  double t = h*i; 

    std::vector<double> k1, k2, k3, k4, aux;
    k1.resize(data.size());
    k2.resize(data.size());
    k3.resize(data.size());
    k4.resize(data.size());
    aux.resize(data.size());
      
    
    // k1
    for(int ii = 0; ii < data.size(); ++ii) {
      k1[ii] = h*f(ii, t, data);
    }
    // k2 aux
    for(int ii = 0; ii < data.size(); ++ii) {
      aux[ii] = data[ii] + k1[ii]/2;
    }
    //k2
    for(int ii = 0; ii < data.size(); ++ii) {
      k2[ii] = h*f(ii, t + h/2, aux);
    }
    // k3 aux
    for(int ii = 0; ii < data.size(); ++ii) {
      aux[ii] = data[ii] + k2[ii]/2;
    }
    //k3
    for(int ii = 0; ii < data.size(); ++ii) {
      k3[ii] = h*f(ii, t + h/2, aux);
    }
    // k4 aux
    for(int ii = 0; ii < data.size(); ++ii) {
      aux[ii] = data[ii] + k3[ii];
    }
    //k4
    for(int ii = 0; ii < data.size(); ++ii) {
      k4[ii] = h*f(ii, t + h, aux);
    }

    // write new data
    for(int ii = 0; ii < data.size(); ++ii) {
    data[ii] = data[ii] + (k1[ii] + 2*k2[ii] + 2*k3[ii] + k4[ii])/6.0;
    
   
  }

  }
  
}
