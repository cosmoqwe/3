#include <iostream>
using namespace std;
int c;
void parametrs(int a, int b)
{
	c=pow(a, b);
	cout << c;
}
void main()
{
	int x, y;
	cin >> x >> y;
	parametrs(x, y);
}