#include<iostream>
using namespace std;
int main() {
    int n;
    int a[100];
    cout << "enter the range of  array";
    cin >> n;
    cout << "enter array ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[abs(a[i])] > 0) {
            a[abs(a[i])] = -a[abs(a[i])];
        }
        else
            cout << abs(a[i]) << " ";
    }
}