#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i =1;
    while (i <= n){
        int spaces = 1;
        while ( spaces <= n-i){
            cout << " ";
            spaces++;
            
        }
        int j = 1;
        int val=i;
        while (j <= i){
            cout << val+j-1;
            j++;
        }
        j = i-1;
        int k = val+j-1;
        while (j >= 1){
            cout << k;
            j--;
            k--;
        }
        cout << endl;
        i++;
    }
    
}

