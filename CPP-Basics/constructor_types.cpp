#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default Constructor
    Student() {
        name = "Default";
        age = 18;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("John", 21);
    s1.display();
    s2.display();
    return 0;
}