//- POP vs OOP program: area of rectangle (both ways).

#include <iostream>
using namespace std;

//POP
int main() {
    float length, width, area;
    
    cout << "Enter length of rectangle: ";
    cin >> length;
    
    cout << "Enter width of rectangle: ";
    cin >> width;
    
    area = length * width;
    
    cout << "Area of Rectangle: " << area << endl;
    
    return 0;
}

//OOP
// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     float length;
//     float width;

// public:
//     void getDimensions() {
//         cout << "Enter length of rectangle: ";
//         cin >> length;
//         cout << "Enter width of rectangle: ";
//         cin >> width;
//     }

//     float calculateArea() {
//         return length * width;
//     }
// };

// int main() {
//     Rectangle rect;
//     rect.getDimensions();
//     cout << "Area of Rectangle: " << rect.calculateArea() << endl;
    
//     return 0;
// }
