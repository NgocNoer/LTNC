    #include <iostream>
    #include <string>
    using namespace std;

    class Student {
    public:
        string name;
        int scores[5];
        int totalScore;

        void input() {
            cin >> name;
            for (int i = 0; i < 5; i++) {
                cin >> scores[i];
            }
        }

        void calculateTotalScore() {
            totalScore = 0;
            for (int i = 0; i < 5; i++) {
                totalScore += scores[i];
            }
        }
    };

    int main() {
        int n;
        cin >> n;
        Student students[100];
        int sum;
        cin >> sum;                 // Tổng điểm 5 môn của Kristen

        for (int i = 0; i < n; i++) {
            students[i].input();
            students[i].calculateTotalScore();
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ((students[i].totalScore) > sum) {
                count++;
            }
        }
        cout << count << endl;
        return 0;
    }
