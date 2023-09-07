#include<iostream>
#include<iomanip>
#include<limits.h>
using namespace std;
int main()
{
	double num;
	double max = INT_MIN , min = INT_MAX;
	for(int i=0;i<5;i++)
	{
		cin >> num;
		if ( num > max) max = num;
		if ( num < min) min = num;
	}
	cout << fixed << setprecision(2) << max + min;
	return 0;
}
