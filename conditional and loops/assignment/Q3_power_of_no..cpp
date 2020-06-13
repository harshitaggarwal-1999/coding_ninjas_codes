#include<iostream>
using namespace std;

int main() {
    int x;
    int n; 
    int a=1;
    cin >> x >> n;
	int pr=x;
    if (n==0){
        cout << "1";
    }else{
	
    	while (a < n){
			pr = x * pr;
        	a = a+1;
    	}
    	cout << pr;
	}
}
/*
// more optimised soln of this question
#include<iostream>
using namespace std;

int main() {
    int x;
    int n; 
    cin >> x >> n;
    int ans = 1;
	while (n>0){
		ans *= x;
		n--;
	}
	cout << ans;
}


