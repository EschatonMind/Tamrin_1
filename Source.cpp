#include <iostream>
using namespace std;

int main() {
	
	int a;
	int b;
	cin >> a >> b;
	int i;
	int sum = 0;
	for (i = 1; i <= b; i++)
	{
		sum = sum + a;
	}
	cout << "Sum = " << sum << endl;
	cout << "a*b = " << a * b<< endl;
	int j;
	int pro = 1;
	for ( i = 1; i <= b; i++)
	{
		pro = pro * a;
	}
	cout << "Pro = " << pro << endl;
		return 0;
}