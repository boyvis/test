#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, i = 0;
	cin >> n;
	int flag = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <i+1; j++)
			cout << "*";
		for (int j = 0; j <2*(n-1-i); j++)
			cout << " ";
		for (int j = 0; j <i+1; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		for (int j = 0; j < 2 * (n - 1 - i); j++)
			cout << " ";
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
	
}