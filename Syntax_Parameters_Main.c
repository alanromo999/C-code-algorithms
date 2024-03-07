#include <stdlib.h>
#include <stdio.h>

float sum(int x, int y, int z);

int main(int argc,const char *argv[3]) {//this sintax its used for runing the code entering parameters at the same time
                                        //example Syntaxis_Parameters_Main 4 5 6

  int  i=0,j=0,k=0;

  float result;
  if (argc <4) {
	  printf("Enter tree integer numbers.\n");
     exit(1);
  }

  i = atoi(argv[1]);
  j = atoi(argv[2]);
  k = atoi(argv[3]);
  result=sum(i,j,k);

  printf("Average= %.2f",result);


  return 0;
}

float sum(int x, int y, int z) {

  return ( x + y + z )/3;
}
