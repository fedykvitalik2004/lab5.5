#include <iostream>
#include <cmath>

using namespace std;
double tP(int r, int n);

int main()                                                                                                                                    
{
	int n, S = 0;
	cout << "n="; cin >> n;
	for (int rr = 0; rr <= n; rr++)
	{
		for (int nn = 0; nn <= rr; nn++)
			cout << tP(nn, rr )<<" ";
		cout << endl;
	}
}

double tP(int n, int r)
{
	if (n == 0 || n == r)
		return 1;
	else
		return tP(n-1, r-1) + tP(n, r-1 );
}