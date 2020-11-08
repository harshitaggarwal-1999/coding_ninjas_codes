#include <iostream>
using namespace std;

int main(){
	int n;
	bool isdec = true;
	cin >> n;
	int previousnum ;
	int crntnum;
	cin >> previousnum;
	int i = 1;   
	while(i < n){
		int newnum;
		cin >> newnum;
		crntnum = newnum;
		if(crntnum == previousnum){
			cout << "false";
            isdec = true;
            break;
        }
		else if (crntnum > previousnum){
			if(isdec == true){
				isdec = false;
			}
			previousnum = crntnum;
		}else if(crntnum<previousnum){
			if(isdec == false){
                cout << "false";
                isdec = true;
                break;
			}
			previousnum = crntnum;
		}
		i++;
	}
    
    if (i==n){
	cout << "true";
	}
}