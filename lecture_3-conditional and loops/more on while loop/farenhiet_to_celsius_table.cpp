#include<iostream>
using namespace std;

int main(){
	int s,e,w;
	cin >> s >> e >> w;
	while(s <= e){
		int j = (s-32)*(5.0/9);
		cout << s << "\t" << j;
		cout << endl;
		s = s + w;
	} 
	
}
