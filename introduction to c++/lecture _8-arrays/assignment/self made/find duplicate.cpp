#include<iostream>
using namespace std;

void finddup(int* arr,int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[j];
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
        finddup(arr,n);
        cout << endl;
    }
}


