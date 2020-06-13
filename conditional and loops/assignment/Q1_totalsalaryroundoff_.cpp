#include <iostream>
using namespace std;  
int main()
{
    int basic,allow,totalsalary;
    float da,hra,pf,slry;
	char grade;
	
	cin>>basic>>allow;
	
	if (grade=='A'){
		allow=1700;
	}
	else if (grade=='B'){
		allow=1500;
	}
	else{
		allow=1300;
	}
	
	hra= 0.2 * basic;
	da = 0.5 * basic;
	pf = 0.11 * basic;
	slry= basic + hra + da + allow - pf;
	
	int intslry= slry;
	float rndof = slry-intslry;
	if (rndof<0.5){
		totalsalary=slry;
	}
	else{
		totalsalary=intslry + 1;
	}
	
	cout<<totalsalary<<endl;	
}
