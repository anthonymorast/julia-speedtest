#include "methods.h"
#include <time.h>

int main(int argc, char **argv) {
  double X[] = {1, 2, 3, 4, 5};
  double Y[] = {1, 4, 9, 16, 25};
  double x = 2.5;
  int n = 5;

  clock_t start, end;
  start = clock();
  double y = Lagrange(X, Y, n, x);
  end = clock();
  printf("%lu\n", start);
  printf("Lagrange interpolation found f(2.5) = %f in %lf seconds.\n", y,
        (double)(end-start)/CLOCKS_PER_SEC);
}
