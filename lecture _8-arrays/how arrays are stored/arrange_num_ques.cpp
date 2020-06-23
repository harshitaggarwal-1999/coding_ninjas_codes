void arrange(int *arr, int n)
{
    int j =-1;
    int index = 0;
    if (n % 2 == 0) {
        for (int i = 1; i <= n ; i++){
            if (i < (n / 2) + 1){
                j = j + 2;
                arr[index] = j;
            }
            else if (i == (n / 2) + 1){
                j++;
                arr[index] = j;
            }
            else if (i > (n / 2) + 1){
                j = j - 2;
                arr[index] = j;
            }
            index++;            
        }
    }
    else if (n % 2 != 0) {
        for (int i = 1; i <= n ; i++) {
            if (i <((n / 2) + 2)) {
                j = j + 2;
                arr[index] = j;
            } else if (i == ((n / 2) + 2)) {
                j--;
                arr[index] = j;
            } else if (i > ((n / 2) + 2)) {
                j = j - 2;
                arr[index] = j;
            }
            index++;
        }
    }
}
