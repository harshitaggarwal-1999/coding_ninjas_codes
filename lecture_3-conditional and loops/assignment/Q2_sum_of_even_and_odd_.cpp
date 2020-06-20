#include<iostream>
using namespace std;


int main(){
	int n;
	int rem;
	int evsum=0,odsum=0;
	cin >> n;
	while(n!=0){
		rem=n%10;
		if (rem % 2 == 0){
			evsum= evsum + rem;
		}else{
			odsum = odsum + rem;
		}
		n=n/10;
	}
	cout << evsum << " " << odsum << endl;
}

