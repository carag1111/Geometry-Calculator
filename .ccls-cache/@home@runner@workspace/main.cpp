#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.1415926535897932384626433832795028841971693993;

void displayMenu() {
  cout << "Geometry Calculator\n";
  cout << "1. Calculate the Area of a Circle\n";
  cout << "2. Calculate the Area of a Rectangle\n";
  cout << "3. Calculate the Area of a Triangle\n";
  cout << "4. Quit\n";
  cout << "Enter your choice (1-4): ";
}


int main() {
  int choice;
  double radius, length, width, base, height, area;

  displayMenu();
  cin >> choice;

  cout << fixed << setprecision(2);

  if (choice < 1 || choice > 4) {
    cout << "Invalid choice. Please enter number between 1 and 4.\n";
    return 1;
    }

  switch (choice) {
    case 1: // Circle
      cout << "Enter the radius of the circle: ";
      cin >> radius;
    if (radius < 0) {
      cout << "Invalid radius. Please enter a positive number.\n";
      return 1;
    } else {
      area = PI * radius * radius;
      cout << "The area of the circle is " << area << endl;
    }
      break;
    case 2: // Rectangle
      cout << "Enter the length of the rectangle: ";
      cin >> length;
      cout << "Enter the width of the rectangle: ";
      cin >> width;
    if (length < 0 || width < 0) {
      cout << "Invalid dimensions. Please enter positive numbers.\n";
    } else {
      area = length * width;
      cout << "The area of the rectangle is " << area << endl;
    }
      break;
    case 3: // Triangle
      cout << "Enter the base of the triangle: ";
      cin >> base;
      cout << "Enter the height of the triangle: ";
      cin >> height;
    if (base < 0 || height < 0) {
      cout << "Invalid dimensions. Please enter positive numbers.\n";
      } else {
      area = 0.5 * base * height;
      cout << "The area of the triangle is " << area << endl;
    }
      break;
    case 4: // Quit
      cout << "Goodbye!\n";
      break;
  }
  return 0;
  }
