#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	while (i<=n){
		int spaces=1;
		while (spaces<=n-i){
			cout <<" ";
			spaces++;
		}
		int j = i;
		while (j>=1){
			cout << j;
			j--;
		}
		int num = 2;
		int k = 2;
		while (k<=i){
			cout << num;
			num++;
			k++;
		}
		cout<<endl;
		i++;
	}
}
