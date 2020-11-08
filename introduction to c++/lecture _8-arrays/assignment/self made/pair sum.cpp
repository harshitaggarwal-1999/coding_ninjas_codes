#include<iostream>
using namespace std;

void findpair(int* arr,int n,int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if ((arr[i]+arr[j]) == x){
                count++;
                //cout << arr[i] << " " <<arr[j] << endl;
            }
        }
    }
    cout << count ;
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
        cout << " enter the no. whose sum pair you wam to find: ";
        cin >> x;
        findpair(arr,n,x);
        cout << endl;
    }
}


