#include<iostream>
using namespace std;

int main(){
	int N;
	int a=0;
	int rem,rem1;
	unsigned long long int sum=0,rev=0;
	cin>>N;
	while(N!=0){
		rem=N%2;
		N=N/2;
		sum=sum*10+rem;
		if(sum==0){
			a=a+1;
		}
	}
	while(sum!=0){
		rem1=sum%10;
		sum=sum/10;
		rev=rev*10+rem1;		
}
if(a>0){

	while(a>0){
		rev=rev*10;
		a=a-1;
	}
cout<<rev;
}else{

	cout<<rev;
}
}
