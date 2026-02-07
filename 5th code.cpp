#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    float average;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    average = (m1 + m2 + m3) / 3.0;

    cout << "Average = " << average << endl;

    if (average >= 75) {
        cout << "Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Grade: B" << endl;
    } else if (average >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
