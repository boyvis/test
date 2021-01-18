#include<iostream>
using namespace std;
int main() {
	int n,m;
	int a[100],b[100];
	cout << "enter the range of first array";
	cin >> n;
	cout << "enter array ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
	cout << "enter the range of second array";
	cin >> m;
	cout << "enter array ";
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	cout << "UNION " << endl;
	int i = 0;
	int j=0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			cout << a[i]<<" ";
			i++;
		}
		else if (a[i] > b[j]) {
			cout << b[j]<<" ";
			j++;
		}
		else {
			cout << b[j] << " ";
			j++;
			i++;
		}
	}
	while (i < n) {
		cout << a[i] << " ";
		i++;
	}
	while (j < m) {
		cout << b[j] << " ";
		j++;
	}
	cout << endl;
	cout << "INTERSECTION" << endl;
	i = 0;
	j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			i++;
		}
		else if (a[i] > b[j]) {
			j++;
		}
		else {
			cout << a[i]<<" ";
			i++;
			j++;
		}

	}
}
