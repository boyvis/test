#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int n;
    int arr[100];
    int a, b;
    cout << "enter the range of  array";
    cin >> n;
    cout << "enter array " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "enter the numbers to find" << endl;
    cin >> a >> b;
    int p = -1;
    int mind = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a || arr[i] == b) {
            if (p != -1 && arr[i] != arr[p])
                mind = min(mind, i - p);
            p = i;
        }
    }
    cout << mind;
}