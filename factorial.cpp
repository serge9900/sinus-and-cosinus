#include"sin_cos.hpp"
long long unsigned int fun(int num){
	long long unsigned int result =1;
	if(num>1){
		result = fun(num -1)* num;
	}
	else if (num==1){
		return result;
	}
	else if (num == 0){
		return 1;
	}
	
	return result;
}
