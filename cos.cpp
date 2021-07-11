#include"sin_cos.hpp"
double funi(int m){
int k = 1;
for(int i=1; i<=m; i++){
k=k*i;
}
return k;
}
double cost(int x){
	while (x>180 || x<0){
	if(x>180){x-=180; x*=-1;}
	else{x=x+180;
		x*=-1;}}
x= x * M_PI / 180;
	double res = 1;
for(int h=1; h<10; h++){
int n = 2 * h;
	res +=  pow (-1, h )  * pow ( x, n ) / ( funi( n ) );
}
return res;
}

