#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n << endl;
	if (n==1)
		;
	else if(n%2)
		n=3*n+2;
	else
		n=n/2;
	cout << n << endl;
	return 0;
}
