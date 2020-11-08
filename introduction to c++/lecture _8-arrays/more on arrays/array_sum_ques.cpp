#include<iostream>
using namespace std;

int main(){
    int array[1000000];
    int n;
    int sum = 0;
    cin >> n;
    for(int i =0; i < n; i++) {
        cin >> array[i];
    }
    for(int i =0; i < n; i++) {
        sum = sum + array[i];
        
    }
    cout << sum << endl;
}



