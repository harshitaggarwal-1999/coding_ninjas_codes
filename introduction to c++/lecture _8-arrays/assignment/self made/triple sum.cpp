#include<iostream>
using namespace std;

void triplesum(int* arr,int n,int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i]+arr[j]+arr[k] == x) {
                    count++;
                    cout << arr[i] << arr[j] << arr[k] << endl;
                }
            }
        }
    }
    cout << count << endl;
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
        int x;
        cout << "enter the no. whose you want to find ";
        cin >> x;
        triplesum(arr,n,x);
        cout << endl;
    }
}


