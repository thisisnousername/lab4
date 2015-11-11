/*
edited by: markus
     date: 2015-11-11
*/

#include <iostream>
#include <cmath>

using namespace std;


void print(double* p, const int N, const double dx, const double xmin)
{
   for(int i=0; i<N; i++)
       cout << i*dx + xmin << "\t" << p[i] << endl;
}

void func(double* p, const int N, const double dx, const double xmin){
	for(int i=0; i<N; i++)
		p[i]=exp(- pow(dx*i+xmin, 2));
}

void deriv(double* p, const int N, const double dx, const double xmin, const double xmax){
	double a=p[0];
	double b;

	for(int i=1; i<N-1; i++){
		b=p[i];	
		p[i]=(p[i+1]-a)/(2*dx);
		a=b;
	}
	p[0] = 0;
	p[N-1] = 0;
}


int main(){
  const int N = 256;
  double p[N];
  const double xmax = 15;
  const double xmin = -15;
  const double dx = (xmax-xmin)/(N-1);

	func(p,N,dx,xmin);

	deriv(p,N,dx,xmin,xmax);

	print(p,N,dx,xmin);

	return 0;
}
