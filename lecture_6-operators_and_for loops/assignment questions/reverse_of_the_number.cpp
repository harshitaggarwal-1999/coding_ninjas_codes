#include<iostream>
using namespace std;

int main() {
    int N;
    int rev=0;
    int rem;
    cin>>N;
    while (N!=0){
        rem=N%10;
        N=N/10;
        rev=(rev*10)+rem;
    }
    cout<<rev;
}
