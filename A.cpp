#include <iostream>
using namespace std;
void n_processor(unsigned int);
int main()
{
	unsigned int n;
	cout << "Please input a positive integer: ";
	cin >> n;
	n_processor(n);
	cout << endl;
	return 0;
}
void n_processor(unsigned int n)
{
	if (n == 1)
	{
		cout << "1 ";
	}
	else if (n % 2 == 1)
	{
		cout << n <<" ";
		n = 3 * n + 1;
		n_processor(n);
	}
	else if (n % 2 == 0)
	{
		cout << n <<" ";
		n = n / 2;
		n_processor(n);
	}
}