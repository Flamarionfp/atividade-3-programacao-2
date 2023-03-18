#include <stdio.h>
#include <math.h>

int main() {
  const int MAX_NUMBER = 1000;
  double squareRoot;

  for (int i = 1; i < MAX_NUMBER; i++) {
    squareRoot = sqrt(i);
    int formattedSquareRoot = (int) squareRoot;

    if (formattedSquareRoot % 2 != 0) {
      printf("%lf\n", squareRoot);
    }
  }
  
  return 0;
}