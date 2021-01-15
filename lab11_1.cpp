#include<iostream>
using namespace std;

long long int fibonacci(long long int);

int main(){

    cout << fibonacci(50);

    return 0;
}

long long int fibonacci(long long int x){
	
	if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else{
		return fibonacci(x-1) + fibonacci(x-2);
	}
}