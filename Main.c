#include <stdio.h>
#include <math.h>


int main() 
{
	double x, y, result;	
	x = 1.155;
	y = 3.981;
	result = log(pow(x,2) + 4 * x * y + pow(y, 2)) - 12 * cos(x * pow(y, 4)) + 13 * pow(x, 6);
	printf("Result: %f\n", result);

	return 0;
}
