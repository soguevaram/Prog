#include <fstream>
#include <cmath>
#include <iomanip>

using fptr = double(double);  
double bisection(double xl, double xu, double eps, fptr f);
double regulafalsi(double xl, double xu, double eps, fptr f);
double newton_raphson(double x0, double eps, fptr f, fptr fderiv);
double fun(double x);
double deriv(double x);

  
int main(void)
{
  std::ofstream fout ("1.txt");
  fout << "#Eps-Delta"	<<std::setw(7) << "\t" << "N bisection" <<std::setw(2)	<< "\t" <<  "N regula"<< "\t" << "N newton" << "\n";

  for (int n=1; n <= 9; ++n){
    
    double eps = std::pow(10,-n);

    fout.setf(std::ios::scientific);
    fout<<std::setprecision(15) << eps << "\t";
    fout.unsetf(std::ios::scientific);
    fout<<std::setw(5);
    fout<< bisection(0, 50, eps, fun) << "\t"
	<<std::setw(10)
	<< regulafalsi(0, 50, eps, fun) << "\t"
	<<std::setw(10)
	<< newton_raphson(0.1, eps, fun, deriv) << "\n";   
	       }
  fout.close();
  return 0;
}


double bisection(double xl, double xu, double eps, fptr f)
{
  double xr = xl;
  int iter = 0;
  while(1) {
    xr=(xl+xu)/2;
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    else if (f(xr)*f(xl) < 0) {
      xu = xr;
    }
    else {
      xl = xr;
    }
    iter++;
  }
  return  iter ;
}

double regulafalsi(double xl, double xu, double eps, fptr f)
{
  double xr = xl;
  int iter = 0;
  while(1) {
    xr = xu - (f(xu)*(xl-xu))/(f(xl) -f(xu));
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    else if (f(xr)*f(xl) < 0) {
      xu = xr;
    }
    else {
      xl = xr;
    }
    iter++;
  }
  return  iter ;

}


double newton_raphson(double x0, double eps, fptr f, fptr fderiv)
{
  double xr = x0;
  int iter = 0;
  while(1) {
    if (std::fabs(f(xr)) <= eps) {
      break;
    }
    xr = xr - f(xr)/fderiv(xr);
    iter++;
  }
  return  iter ;
  
}


double fun(double x)
{
  return 3*std::exp(-x) - x;
}

double deriv(double x)
{
  return -3*std::exp(-x)- 1;
}
