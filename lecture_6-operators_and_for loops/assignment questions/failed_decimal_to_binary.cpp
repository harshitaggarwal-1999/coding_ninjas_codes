#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    unsigned long long int a=1,b=1;
    unsigned long long int sum=0;
    
	int pr=1,pr2=1;
    while(N!=0){
        if(a>N){
            N=N-b;
            sum=sum+pr2;
            a=1;
            b=1;
            pr=1;
            pr2=1;
        }else if(a==N){
            N=N-a;
            sum=sum+pr;            
        }else{
            b=a;
            pr2=pr;
            a=2*b;
            pr=10*pr2;
        }
    
    }
    cout<<sum;
   
}

