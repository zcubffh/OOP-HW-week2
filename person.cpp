#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;
    string phoneNum;//Khai bao SDT

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNum << endl; 
    }

    bool isAdult() {
        return age >= 18;
    }

    void move(string newAddress) {
        address = newAddress;
        cout << "Address updated to: " << address << endl;
    }

    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Person person1;
    person1.name = "John Doe";
    person1.age = 16;
    person1.address = "123 Main St";
    person1.phoneNum = "123456789";

    person1.displayInfo();
    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    person1.move("123 Real st");
    person1.greet();
return 0;
}