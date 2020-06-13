#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n == 1 || n == 2){
		cout << 1;
	}
	else{
		int sum = 0;
		int x = 1;
		int y = 1;
		for (int i = 3 ; i <= n ; i++){
			sum = x + y;
			x = y;
			y = sum;
		}
		cout << sum;
	}
}
