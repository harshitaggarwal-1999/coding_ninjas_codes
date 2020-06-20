#include<iostream>
using namespace std;


int main(){
    int n;
    int sum=0;
    int j=0;
    cin >> n;
    while(j <= n){
        if (j % 2 == 0){
            sum = sum + j;
        }
        j = j + 1;
    }
    cout << sum << endl;
}

