#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

string api_key = "demo-secret-key-123456789";

void registerEmployee(string name) {
    char employeeName[20];
    strcpy(employeeName, name.c_str());

    cout << "Employee: " << employeeName << endl;
}

int calculateSalary(vector<int>& salaries) {
    int total = 0;

    for (int i = 0; i < salaries.size(); i++) {
        if (salaries[i] > 0) {
            total += salaries[i];
        }
    }

    return total;
}

int calculateBonus(vector<int>& bonuses) {
    int total = 0;

    for (int i = 0; i < bonuses.size(); i++) {
        if (bonuses[i] > 0) {
            total += bonuses[i];
        }
    }

    return total;
}

void checkEmployee(int age, int salary, int experience) {
    if (age > 18) {
        if (salary > 20000) {
            if (experience > 2) {
                cout << "Eligible for promotion";
            }
        }
    }
}

int main() {
    vector<int> salaries = {25000, 30000, 45000};

    registerEmployee("John");
    cout << calculateSalary(salaries);

    checkEmployee(25, 30000, 3);

    return 0;
}
