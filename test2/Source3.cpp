#include<iostream>
using namespace std;
int main() {
	int n, arr[100];
	cout << "enter the size of the array " << endl;
	cin >> n;
	cout << "enter the array " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int flag = 0;
	cout << "the leaders are" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] < arr[j]) {
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 0) {
			cout << arr[i] << endl;
		}
	}


}