#include <iostream>
using namespace std;
int main() {
	/* int a;
	cin << a;
	bool res = a % 2 != 0;
	cout << boolalpha << res << endl;
	*/
	/* 
	int a;
	cin << a;
	bool res = a % 2 == 0;
	cout << boolalpha << res << endl;
	*/
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a > 2 && b <= 3;
	cout << boolalpha << res << endl;
	*/
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a >= 0 || b < -2;
	cout << boolalpha << res << endl;
	system("pause");
	*/
	/* 
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a < b && b < c;
	cout << boolalpha << res << endl;
	*/
	/*//7
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a < b < c || c < b < a;
	cout << boolalpha << res << endl;
	system("pause");
	*/
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2 != 0;
	cout << boolalpha << res << endl;
	system("pause");
	*/
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 || b % 2 != 0;
	cout << boolalpha << res << endl;
	system("pause");
	*/
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0;
	cout << boolalpha << res << endl;
	*/ 
	/* 
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2 != 0 || a % 2 == 0 && b % 2 == 0;
	cout << boolalpha << res << endl;
	*/
	//12
	/* 
	int a, b, c;
	cin >> a >> b>>c;
	bool res = a > 0 && b > 0 && c > 0;
	cout << boolalpha << res << endl;
	*/
	/* 
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 || b > 0 || c > 0;
	cout << boolalpha << res << endl;
	*/ 
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 && b < 0 && c < 0 || a<0 && b>0 && c < 0 || a < 0 && b < 0 && c>0;
	cout << boolalpha << res << endl;
	system("pause");

}
