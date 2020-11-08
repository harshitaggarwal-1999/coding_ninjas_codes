#include<iostream>
#include<climits>
using namespace std;

void selectionsort(int *arr,int n) {
    int index=0;
    for (int i = 0; i < n-1; i++) {
        int store = 0;
        int smallest =INT_MAX;
        int smallest_index = -1;
        for (int j = index; j < n; j++) {
            if (arr[j]<smallest) {
                smallest=arr[j];
                smallest_index = j;
            }
        }
        store=arr[index];
        arr[index]=arr[smallest_index]; 
        arr[smallest_index]=store;
        index++;       
    }
    for (int i =0; i < n; i++) {
        cout << arr[i] << " ";
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
        selectionsort(arr,n);

    }
}



