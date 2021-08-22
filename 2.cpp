#include <iostream>
using namespace std;
void parametrs(int a, int b)
{
	int sum = a;
	for (; a <= b;a++)
	{
		sum += a;
	}
	cout << sum;
}
void main()
{
	int x, y;
	cin >> x >> y;
	parametrs(x, y);
}