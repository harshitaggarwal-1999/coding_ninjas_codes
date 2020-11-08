#include<iostream>
using namespace std;

void finduniq(int* arr,int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==j){
                continue;
            }
            if (arr[i]==arr[j]) {
                break;
            }if (j == n-1) {
                cout << arr[i];
                return;
            }
        }
    }
}

int main(){
    int t;
    cout << " enter the no. of test cases: ";
    cin >> t;
    int arr[100000];
    for (int i = 0; i < t; i++) {
        int n;
        cout << "no. of elements: ";
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        finduniq(arr,n);
        cout << endl;
    }
}


