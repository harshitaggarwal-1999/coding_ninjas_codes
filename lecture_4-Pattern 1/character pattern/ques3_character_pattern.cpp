#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int i = 1;
    char val = 'A'+n-1;//it will a alterate the value according to n
    	while (i <= n){
        int j = 1;
        char startchar= val-i+1;// it will control what must be printed
        while (j <= i){
            char ch = startchar+j-1;//it will change ascii code to character
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}

