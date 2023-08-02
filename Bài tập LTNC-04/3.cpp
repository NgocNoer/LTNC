#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int findIndex(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            if (isPalindrome(s, left + 1, right)) {
                return left;
            } else if (isPalindrome(s, left, right - 1)) {
                return right;
            } else {
                return -1;
            }
        }
        left++;
        right--;
    }
    return -1;
}

int main() {
    string s;
    cin >> s;
    int index = findIndex(s);
    cout << index << endl;
    return 0;
}