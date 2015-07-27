//This program is used in attenuation_measurement as a simple adding program to divide
//2 numbers together. Called to do floating point division in bash.

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
  
  printf("%.3f",atof(argv[1]) / atof(argv[2]));

}
