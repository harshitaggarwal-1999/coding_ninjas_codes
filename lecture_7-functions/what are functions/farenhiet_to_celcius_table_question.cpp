void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    	while (start <= end) {
		int celcius = ((5*(start-32))/9);
		cout << start << "\t" << celcius << endl;
		start = start + step;
	}  
    
}


