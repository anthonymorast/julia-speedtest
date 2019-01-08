#include "methods.h"

double Lagrange(double *X, double *Y, int n, double x) {
  double y = 0;

  for(int i = 0; i < n; i++) {
    double p = Y[i];
    for(int j = 0; j < n; j++) {
      if(j != i)
        p *= (x - X[j])/(X[i] - X[j]);
    }
    y += p;
  }

  return y;
}
