void sortZeroesAndOne(int *input, int size) {
    int num0 = 0;
    for (int i = 0; i < size; i++) {
        if (input[i] == 0) {
            num0++;
        }
    }
    int i =0;
    while (i < size) {
        if(num0 > 0) {
            input[i]=0;
            num0--;
        }else{
            input[i] = 1;
        }
        i++;
    }
}
