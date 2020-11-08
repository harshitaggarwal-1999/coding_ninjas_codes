 #include<iostream>
using namespace std;

void swaparr(int* arr,int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n/2; i++) {
        int store;
        store = arr[a];
        arr[a]=arr[b];
        arr[b]=store;
        a=a+2;
        b=b+2;
        if (a==n-1){
            break;
        }
    }
    for(int i = 0; i < n; i++) {
            cout << arr[i]<<" ";
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
        swaparr(arr,n);
        cout << endl;
    }
}


