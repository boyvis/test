#include<iostream>
#include <algorithm>

using namespace std;
int main() {
	int n;
	cout << "enter the size of the array " << endl;
	cin >> n;
	int arr[100];
	cout << " enter the array " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << arr[0] << " ";
	int i = 0;

	while (true) {
		if (arr[i] != arr[i + 1]) {
			cout << arr[i + 1];
			break;
		}
		i++;
	}
}


