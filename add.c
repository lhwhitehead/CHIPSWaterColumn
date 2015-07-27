//This program is used in attenuation_measurement as a simple adding program to add
//2 numbers together. Called to do floating point addition in bash.

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  
  printf("%.3f",atof(argv[1]) + atof(argv[2]));

}
