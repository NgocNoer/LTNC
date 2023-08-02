#include <iostream>
#include <string>
using namespace std;

int main() {
    string time12;
    cout << "Enter time (12-hour format): ";
    getline(cin, time12);

    int hours = stoi(time12.substr(0, 2));
    int minutes = stoi(time12.substr(3, 2));
    int seconds = stoi(time12.substr(6, 2));
    string am_pm = time12.substr(9, 2);

    if (am_pm == "PM" && hours != 12) {
        hours += 12;
    } else if (am_pm == "AM" && hours == 12) {
        hours = 0;
    }

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}