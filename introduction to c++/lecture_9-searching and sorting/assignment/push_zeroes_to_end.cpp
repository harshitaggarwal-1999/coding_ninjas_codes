void pushZeroesEnd(int *input, int size)
{
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (input[i] != 0) {
            int temp = input[k];
            input[k] = input[i];
            input[i] = temp;
            k++;
        }
    }
}
