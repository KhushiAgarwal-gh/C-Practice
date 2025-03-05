#include <iostream>
#include <string>
#define MAX 10
using namespace std;

class Exception {
public:
    string message;
    Exception(const string& msg) : message(msg) {}
    void display() const {
        cout << "Error: " << message << endl;
    }
};

template <class T>
class IT {
public:
    string name;
    T rollNo;
    T total;
    float perc;

    virtual void getDetails() = 0;
    virtual void putDetails() const = 0;
};

template <class T>
class Student : public IT<T> {
public:
    void getDetails() override {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, this->name);
        cout << "Enter roll number: ";
        cin >> this->rollNo;
        cout << "Enter total marks out of 500: ";
        cin >> this->total;

        try {
            if (this->total > 500 || this->total < 0)
                throw Exception("Invalid marks. Setting total to 0.");
        } catch (Exception& e) {
            e.display();
            this->total = 0;
        }
        this->perc = (this->total / 500.0f) * 100;
    }

    void putDetails() const override {
        cout << "Name: " << this->name << ", Roll number: " << this->rollNo;
        cout << ", Total: " << this->total << ", Percentage: " << this->perc << "%" << endl;
    }
};

int main() {
    int n;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw b;
        else
            cout << "Result: " << a / b << endl;
    }
    catch (int x) {
        cout << "2nd operand can't be 0" << endl;
    }

    cout << "\nEnter the number of students (up to 10): ";
    cin >> n;

    if (n > MAX || n <= 0) {
        cout << "Invalid number of students\n";
        return 1;
    }

    Student<int> students[MAX];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        students[i].getDetails();
    }

    cout << "\nDetails of Students:\n";
    for (int i = 0; i < n; i++) {
        students[i].putDetails();
    }

    return 0;
}
