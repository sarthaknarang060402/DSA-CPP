#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double ts,al,b,d,pf,h;
	char gr;
	cin>>b>>gr;
	if(!(b>=0&&b<=7500000))return 0;
	if(gr=='A')al=1700;
	else if(gr=='B')al=1500;
	else al=1300;
	d=50*b/100;
	h=20*b/100;
	pf=11*b/100;
	ts = b + d + h + al -pf;
    cout.precision(10);
	cout<<round(ts);
	return 0;
}
// #include<iostream> 
// #include <iomanip> 
// #include <cmath> 
// using namespace std; 
// int main() { 
// 	double basic; 
// 	cin >> basic; 
// 	char grade; 
// 	cin >> grade; 
// 	double hra = 0.2 * basic; 
// 	double da = 0.5 * basic; 
// 	int allowance; 
// 	if(grade == 'A') { 
// 		allowance = 1700; 
// 		} 
// 	else if(grade == 'B') { 
// 		allowance = 1500; 
// 		} 
// 	else { 
// 		allowance = 1300; 
// 		} 
// 	double pf = 0.11 * basic; 
// 	double totalSalary = basic + hra + da + allowance - pf; 
// 	int ans = round(totalSalary); //An internal function implemented in <cmath> library to round off the decimal values 
// 	cout << ans; 
// 	}