// - Inheritance example with base class Person and derived Student, Teacher.

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived class: Student
class Student : public Person {
public:
    void study() {
        cout << name << " is studying." << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
public:
    void teach() {
        cout << name << " is teaching." << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;
    string inputName;

    // Input Student's name
    cout << "Enter Student's name: ";
    getline(cin, inputName);
    student.setName(inputName);
    student.display();
    student.study();

    // Input Teacher's name
    cout << "\nEnter Teacher's name: ";
    getline(cin, inputName);
    teacher.setName(inputName);
    teacher.display();
    teacher.teach();

    return 0;
}
