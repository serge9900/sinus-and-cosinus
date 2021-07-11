#include "sin_cos.hpp"
double fun(int m){
int k = 1;
for(int i=1; i<=m; i++){
k=k*i;
}
return k;
}
double sint(int x){
	while (x>90 || x<-90){
	if(x>90){x=x-180;}
	else{x=x+180;}
	}
x= x * M_PI / 180;
	double res = 0;
for(int h=0; h<10; h++){
int n = 2 * h + 1;
	res +=  pow (-1, h )  * pow ( x, n ) / ( fun( n ) );

}
return res;
}

