#include<iostream>
#include<iomanip>
using namespace std;

class diem
{
	public :
		double  x, y;
		
		void nhap()
		{
			cin >> x >> y;
		}
		
		void in()
		{
			cout << x << y;
		}
};

//==================
class line
{
	public :
		diem a,b;
		double hs_a, hs_b;
		void tim_heso(diem a, diem b)
		{
			if( ( a.x - b.x) == 0)
			{
				hs_a = 0;//( a.y - b.y );
				hs_b = ( a.x * b.y - b.x * a.y);
			}
			else
			{
				hs_a = ( a.y - b.y ) / ( a.x - b.x);
				hs_b = ( a.x * b.y - b.x * a.y) / (a.x - b.x);
			}
		}	
};

int main()
{
	diem a,b,c,d;
	a.nhap();
	b.nhap();
	c.nhap();
	d.nhap();
	line AB,CD;
	AB.tim_heso(a,b);
	CD.tim_heso(c,d);
	
	//==================
	
	if( AB.hs_a == CD.hs_a )
	{
		if( AB.hs_b != CD.hs_b )
			cout << "NO";
		else
			cout << "MANY";
	}
	else
	{
		diem giaodiem;
		giaodiem.x = ( -AB.hs_b + CD.hs_b) / ( AB.hs_a - CD.hs_a );
		giaodiem.y = AB.hs_a * giaodiem.x + AB.hs_b;
		
		giaodiem.in();
	}
	return 0;
}
