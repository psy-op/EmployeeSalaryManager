// EmployeeSalaryManager
// TITLE: Employee Salary Manager

#include <iostream>
#include <string>
using namespace std;

// Employee class with default values and set/get methods
class Employee {
private:
    string name;
    double salary;

public:
    // Default constructor
    Employee() {
        name = "No name";
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    // Setter method for name
    void setName(string n) {
        name = n;
    }

    // Getter method for name
    string getName() {
        return name;
    }

    // Setter method for salary
    void setSalary(double s) {
        salary = s;
    }

    // Getter method for salary
    double getSalary() {
        return salary;
    }

    // Method to calculate new salary based on raise percentage
    double newSalary(double r) {
        return salary + salary * r;
    }
};

// Main function that asks the user for 10 employees and their salary
int main() {
    Employee emp[10];

    for (int i = 0; i < 10; i++) {
        string x = "";
        cout << "Please enter employee " << i << " name: ";
        cin >> x;
        emp[i].setName(x);

        double y;
        cout << "Please enter employee " << i << " salary: ";
        cin >> y;
        emp[i].setSalary(y);
        cout << endl;
    }

    // Prints a table with each employee and their salary
    cout << "Name:\tSalary:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << emp[i].getName() << "\t" << emp[i].getSalary() << endl;
    }

    // Asks the user for the raise for all employees and prints the new table with the new salary
    double z;
    cout << endl << "Please enter new raise salary for all employees: ";
    cin >> z;
    if (z <= 0) {
        cout << "Please enter a number greater than 0";
    } else {
        cout << endl << "Name:\tNew Salary:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << emp[i].getName() << "\t" << emp[i].newSalary(z) << endl;
        }
    }

    return 0;
}
