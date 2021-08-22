#include <iostream>
using namespace std;
void chislo(int q)
{
	int z, x, c, v, k, n, tt, t;
	setlocale(0, "");
	if (q <= 999999 && q >= 100000) {
		z = q % 10;
		q /= 10;
		x = q % 10;
		q /= 10;
		c = q % 10;
		q /= 10;
		v = q % 10;
		q /= 10;
		k = q % 10;
		q /= 10;
		n = q % 10;

		tt = z + x + c;
		t = v + k + n;
		if (tt == t)
		{
			cout << "Счастливое число " << endl;
		}
		else {
			cout << "Не счастливое число " << endl;
		}
	} 
}
void main()
{
	setlocale(0, "");
	int q;
	cout << "Введите шестизначное число ";
	cin >> q;
	chislo(q);
}