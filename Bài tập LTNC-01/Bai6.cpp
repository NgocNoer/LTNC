#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap So Phan Tu: ";
    cin >> n;

    int arr[n];
    cout << "Co " << n << " Phan Tu la: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }

    cout << "Mang Dao Nguoc la: ";
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}