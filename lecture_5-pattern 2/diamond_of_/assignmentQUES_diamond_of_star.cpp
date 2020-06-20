#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i=1;
	while (i <= ((n/2)+1)){
		int spaces = i;
		while (spaces <= ((n/2))){
			cout << " ";
			spaces++;
		}
		int j=1;
		while (j <= ((2*i)-1)){
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	int i1 = 1;
	while  (i1 <= (n/2)){
		int spaces1 = 1;
		while (spaces1 <= i1){
			cout << " ";
			spaces1++;
		}
		int j1 = 2*i1-1;
		while (j1 <= n-2){
			cout << "*";
			j1++;
		}
		cout << endl;
		i1++;
	}
}
