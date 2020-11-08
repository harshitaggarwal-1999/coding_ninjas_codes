#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 2;
	while(i <= n){
		bool divided = false;
		int d = 2;
		while(d < i){
			if (i % d == 0){
				divided=true;
				break;
			}
			d++;
		}
		if (!divided){
			cout<<i<<endl;
		}
		i++;
	}
}
