
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
    int x = 0;
	int y = 1;
	int sum = 0;
    if (n == 0){
        return true;
    }
	while (sum < n){
		sum = x + y;
		x = y;
		y = sum;
		if (sum == n){
			return true;
		}
	}
	return false;



}
