int findUnique(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (size == 1) {
            return arr[i];
        }
        for (int j = 0; j < size; j++) {
            //dont do alag se i == j continue as nahi to 3 4 3 4 1 in this case i jo hai vo i 4 tak ja chuka hai phir bhi answer nahi aaya j=0 ,j=1,j=2,j=3
            if (arr[i]==arr[j] && i!=j) {
                break;
            }if (j == size-1) {
                return arr[i];
            }
        }
    }
}
