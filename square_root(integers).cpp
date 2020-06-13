#include<iostream>
using namespace std;

int main() {
	long long int N;
    int x=0;
    cin>>N;
    if (N==0){
    	cout<<0;
    	
	}else{
	
    while(x<=(N)){
        if ((x*x)>N){
            cout<<x-1;
            break;
        }else{
            x=x+1;
        }
    }
}
}

