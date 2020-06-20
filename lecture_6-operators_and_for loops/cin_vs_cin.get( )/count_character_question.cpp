#include <iostream>
using namespace std;

int main(){
	char c;
    c = cin.get();
	int numcount = 0;
	int alphacount = 0;
	int count = 0;
	while(c != '$'){
		if (c > 47 && c < 58){
			numcount++;
		}else if(c > 96 && c < 123){
			alphacount++;
		}
		count++;
        c=cin.get(); 
	}
	int spacecount = count - alphacount - numcount;
	cout << alphacount<<" ";
	cout << numcount <<" ";
	cout << spacecount;
}
/*
//in this c != '$' is being checked on the agrbage value not on the actual value can give wrongt andwer and in this -1 is compulsary as here count think u entered first character $ only which increases count by one and then it checks whether c is $ or not thats why we have to reduce -1, and it can give wrong answer too 
#include <iostream>
using namespace std;

int main(){
	char c;
	int numcount = 0;
	int alphacount = 0;
	int count = 0;
	while(c != '$'){
		c = cin.get();
		if (c > 47 && c < 58){
			numcount++;
		}else if(c > 96 && c < 123){
			alphacount++;
		}
		count++;
	}
	int spacecount = count - alphacount - numcount;
	cout << alphacount<<" ";
	cout << numcount <<" ";
	cout << spacecount;
}
*/