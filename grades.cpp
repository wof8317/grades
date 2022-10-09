#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float grade1;
    float grade2;
    float grade3;
    float avg;

    cout << "Please input the first grade: ";
    cin >> grade1;

    cout << "Please input the second grade: ";
    cin >> grade2;

    cout << "Please input the third grade: ";
    cin >> grade3;

    avg = (grade1 + grade2 + grade3) / 3;

    cout << setprecision(2) << fixed;
    cout << "The average of the three grades is " << avg << endl;
    return 0;
}