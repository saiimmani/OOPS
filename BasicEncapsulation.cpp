#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setDetails(string n, int a) { name = n; age = a; }
    void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main() {
    Person p;
    p.setDetails("John", 25);
    p.display();
    return 0;
}
