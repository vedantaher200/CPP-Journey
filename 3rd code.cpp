#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[100];
    int sum = 0;
    int maxMarks = 0, minMarks = 100;

    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        sum += marks[i];

        if (marks[i] > maxMarks)
            maxMarks = marks[i];

        if (marks[i] < minMarks)
            minMarks = marks[i];
    }

    float average = (float)sum / n;

    cout << "\n--- Result Summary ---\n";
    cout << "Total Students: " << n << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Highest Marks: " << maxMarks << endl;
    cout << "Lowest Marks : " << minMarks << endl;

    cout << "\nAll Students Marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    return 0;
}
