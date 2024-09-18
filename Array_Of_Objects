#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    char name[30];

    void getdata() {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    void putdata() {
        cout << id << " " << name << endl;
    }
};

int main() {
    int n, i;
    cout << "Enter Number of Employees: ";
    cin >> n;

    Employee emp[50]; 
    for(i = 0; i < n; i++) {
        emp[i].getdata();
    }

    cout << "Employee Data:" << endl;

    for(i = 0; i < n; i++) {
        emp[i].putdata();
    }

    return 0;
}
