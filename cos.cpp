#include"sin_cos.hpp"
double cost(double x){
	double res = 0;
	if(int(x) % 180 != 0 && int(x) % 90 == 0)
	{
		return 0;
	} else {
		x= x * M_PI / 180;
	}
	while(x >= 2*M_PI) {x-= 2*M_PI;}
	while(x<= (-2)*M_PI) {x+= 2*M_PI;}

	
for(int h=0; h<10; h++){
int n = 2 * h;
	res +=  pow (-1, h )  * pow ( x, n ) / ( fun( n ) );
}
return res;
}

