#include<iostream>
using namespace std;
void main() {
	int n;
	int a[100];
	cout << "enter the range of  array";
	cin >> n;
	cout << "enter array ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d;
	cout << "enter the rotation count";
	cin >> d;
	int j = 0;
	for (int i = 0;j != n; i++,j++) {
		if (i + d == n) {
			i = 0;
			d = 0;
		}
		cout << a[i + d]<<" ";
		
	}
}