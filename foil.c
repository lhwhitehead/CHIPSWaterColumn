#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  float first;
  float second;
  first=atof(argv[1]);
  second=atof(argv[2]);
  printf("%3f",((first*first) - (2 * first * second) + (second*second)));

}
