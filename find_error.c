//This program takes two arguments, the rmsSum and number of entries, and finds the error
//on the mean by taking the sqrt of the first and dividing by the second.

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  
  float first;
  float second;
  first = atof(argv[1]);
  second = atof(argv[2]);
  printf("%.3f",sqrt(first) / second);

}
