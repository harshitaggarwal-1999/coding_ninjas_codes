#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        char startchar='A'+i-1;//will control what must be printed
        int j = 1;
        while (j <= i){
            char ch= startchar+j-1;//will change ascii code to their respective characters
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
  
}



