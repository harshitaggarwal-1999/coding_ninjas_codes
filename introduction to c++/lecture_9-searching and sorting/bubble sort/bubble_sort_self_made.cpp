void bubbleSort(int *input, int size)
{
    int end = size-1;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < end; j++) {
            if (input[j]>input[j+1]) {
            	int store = input[j];
            	input[j]=input[j+1];
            	input[j+1]=store;
            }
        }
        end--;
	}
}
