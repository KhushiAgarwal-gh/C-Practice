#include <iostream>
#define max 10
using namespace std;

class student {
private:
    char name[30];
    int rollno;
    int total;
    float perc;

public:
    void getdetails(void);
    void putdetails(void);
    void printdivision(void);
};

void student::getdetails(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> rollno;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}

void student::putdetails(void) {
    cout << "Student details:\n";
    cout << "Name: " << name << " | Roll No: " << rollno << " | Total: " << total << " | Percentage: " << perc << "%" << endl;
    printdivision();
}

void student::printdivision(void) {
    if (perc >= 80) {
        cout << "1st division" << endl;
    } else if (perc >= 60 && perc < 80) {
        cout << "2nd division" << endl;
    } else if (perc >= 45 && perc < 60) {
        cout << "3rd division" << endl;
    } else {
        cout << "Fail" << endl;
    }
}

int main() {
    int n;
    student std[max];
    cout << "Enter total number of students: ";
    cin >> n;

    for (int loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":\n";
        std[loop].getdetails();
    }

    for (int loop = 0; loop < n; loop++) {
        cout << "\nDetails of student " << loop + 1 << ":\n";
        std[loop].putdetails();
    }

    return 0;
}