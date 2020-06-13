#include<iostream>
using namespace std;

int main() {
    int N;
    int a=1,binary=0,val;
    cin>>N;
    while (N!=0){
        val=N%10;
        N=N/10;
        binary=(val*(a))+binary;
        a=2*a;    
    }
    cout<<binary;
}

