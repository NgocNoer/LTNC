#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    cout << "Length of string 1: " << len1 << endl;
    cout << "Length of string 2: " << len2 << endl;

    string concat = str1 + string(" ") + str2;
    cout << "Concatenated string: " << concat << endl;

    char temp1 = str1[0];
    char temp2 = str2[0];
    str1[0] = temp2;
    str2[0] = temp1;

    cout << "New string 1: " << str1 << endl;
    cout << "New string 2: " << str2 << endl;

    return 0;
}