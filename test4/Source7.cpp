#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b) {
    return abs(a) < abs(b);
}
void findMinSum(int arr[], int n)
{
    sort(arr, arr + n, compare);
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i - 1] + arr[i]) <= min) {
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }
    cout << "The two elements are "
        << arr[x] << " " << arr[y];
}
int main() {
    int n;
    int a[100];
    cout << "enter the range of  array";
    cin >> n;
    cout << "enter array ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    findMinSum(a, n);
}

	