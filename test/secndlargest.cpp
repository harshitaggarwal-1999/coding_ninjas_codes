#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "total numbers to be inserted: ";
	cin >> n;
	int i = 1;
	int k;
	int largest=-1;
	int scndlargest=-1;
	while (i<=n){
		cin >> k;//current number which is entered
		if (k>largest){//this will update largest
			scndlargest=largest	;
			largest=k;
		}else if((k>scndlargest && k<largest)||k==scndlargest){//thsi will update second largest
			scndlargest=k;
		}
		i++;
	}
	cout<<largest<<" ";
	cout<<scndlargest;
}
