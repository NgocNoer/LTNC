#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        if (left_sum == sum - left_sum - arr[i]) {
            cout << "YES at index " << i << endl;
            return 0;
        }
        left_sum += arr[i];
    }

    cout << "NO" << endl;
    return 0;
}