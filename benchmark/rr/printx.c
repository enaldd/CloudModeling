#include <stdio.h>
#include <math.h>

void main(int argc, char ** argv){
  float v = 8.0;
  int i;
  for(i=0;i<200;i++){
    v*=1.05f;
    printf("%.0f\n",roundf(v));
  }
}
