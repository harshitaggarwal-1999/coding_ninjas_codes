#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "enter the number";
	cin >> n;
	int d=2;
	bool divided = false;
	while(d < n){
		if (n % d == 0){
			cout << "not prime"<<endl;
			divided = true;			
		}
		d = d + 1;
	}
	if (!divided){
		cout << "prime" << endl;
	}
	
}
/*
#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "enter the number";
	cin >> n;
	int d=2;
	bool divided = false;
	while(d <= (n/2)){
		if (n % d == 0){
			divided = true;			
		}
		d = d + 1;
	}
	if (!divided){
		cout << "prime" << endl;
	}else{
		cout << "not prime" << endl;
	}
	
}
*/
