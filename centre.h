#include <stdio.h>
#include <stdlib.h>

#ifndef __MY_CENTRE__
#define __MY_CENTRE__
struct coordinate {
	long x;
	long y;
	long z;
};
struct coordinate centre(const struct coordinate cdt[], int num);
struct coordinate *sort(const struct coordinate cdt[], int num, struct coordinate t_cdt[]);
#endif
