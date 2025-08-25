#include <iostream>
#include <cmath>
using namespace std;
class Circle {
public:
    double radius;
    string color; //display color
    bool validradius(){
        return radius > 0;
    }//Test valid radius
    double circumference() {
        return 2 * M_PI * radius;
    }
    double area() {
        return M_PI *  radius * radius;
    }
    void showcolor() {
        cout << "Color:" << color <<endl;
    }//display color
};
int main() {
    Circle circle1;
    cout << "Enter radius:";
    cin >> circle1.radius;
    if(!circle1.validradius()) {
        cout << "Invalid radius." <<endl;
    }
    cout << "Enter color: ";
    cin >> circle1.color;
    cout << "circular circumference:" << circle1.circumference() << "cm" <<endl;
    cout << "area:" <<  circle1.area() <<"cm2" <<endl;
    circle1.showcolor();
    return 0;
}