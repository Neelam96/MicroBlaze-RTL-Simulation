#define dim 3

#include "header.h"
#include <math.h>
//#include <ap_cint.h>
#include <stdio.h>
int main()
{
	float *matp_1;
	float mat1[9]={1,2,3,4,5,6,7,8,9};


	matp_1=mat1;


	float sum = sum_arr(matp_1);


	printf("Sum: %f",sum);

	return 0;
}
