#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string generateTemporaryFile() {
    char filename[L_tmpnam];
    tmpnam(filename);
    return string(filename);
}

double calculateSalary(double salary, int experience) {
    double bonus = 0;

    if (experience >= 5) {
        bonus = salary * 0.20;
    } else if (experience >= 2) {
        bonus = salary * 0.10;
    } else {
        bonus = salary * 0.05;
    }

    return salary + bonus;
}

int main() {
    string employee = "John";
    double salary = 45000;
    int experience = 3;

    cout << "Employee: " << employee << endl;
    cout << "Final Salary: "
         << calculateSalary(salary, experience) << endl;

    cout << "Temporary File: "
         << generateTemporaryFile() << endl;

    return 0;
}
