void swapAlternate(int *arr, int size) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < size/2; i++) {
        int store;
        store = arr[a];
        arr[a]=arr[b];
        arr[b]=store;
        a=a+2;
        b=b+2;
        if (a==size-1){
            break;
        }
    }
}
