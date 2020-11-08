int linearSearch(int *arr, int n, int x)
{
    for (int i = 0; i <= n-1; i++) {
        if (arr[i] == x) {
            return i;
        }else if (i == n-1) {
            return -1;
        }
    }
}
