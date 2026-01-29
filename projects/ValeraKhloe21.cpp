#define MY_PI 3.1415926
#include <iostream>
using namespace std;

/**
 * The program will test a base class named Circle and a derived class 
 * named Cylinder with data members and functions related to the 
 * corresponding class. There will be no user input. The output will test
 * each class finding the radius, area, surface area, and volume given 
 * a preset input.
 *
 * @assignment  ICS 212 Assignment 21
 * @author  Khloe Valera
 * @data        29 April 2025
 */

/**
 * Circle ADT.
 * Base class for Cylinder derived class.
 */

class Circle {
  
  public:

    // For initializing the default value for radius.
    static const double DEFAULT_RADIUS;
    
    /** 
     * Default constructor.  
     * Constructs a circular object with radius 1.
     */
    Circle() {
      setRadius(DEFAULT_RADIUS);
    }

    /**
     * Constructs a Circle object given a radius
     *
     * @param radius1 The radius value.
     */
    Circle(double radius1) {
      setRadius(radius1);
    } 
    
    /**
     * Returns the name of the class.
     *
     */
    char const * name() const {
      return "Circle";
    }
  
    /**
     * Mutator method for radius.
     * If the radius is 0, make it 1 instead.
     * If the radius is negative, make it positive. 
     *
     * @param radius2 The new radius of the circle.
     */
    void setRadius(double radius2) {
      if (radius == 0) {
	radius2 = DEFAULT_RADIUS;
      } else if (radius2 < 0) {
	radius2 = -radius2;
      }
      radius = radius2;
    }
  
    /** Accessor Method. */
    double getRadius() const {
      return radius;
    }

    /** 
     * Member function to return the area of the circle.
     */
    double area() const {
      return MY_PI * radius * radius;
    }

  protected:
  double radius;

}; // End of class Circle.


// Default value for radius of a Circle.
const double Circle::DEFAULT_RADIUS = 1.0;

/**
 * Cylinder ADT.
 * Derived from Circle class.
 * A cylinder is a circle with an added height.
 */

class Cylinder: public Circle {
  
  public:
  
  // Default values for height of a Cylinder.                                                    
  static const double DEFAULT_HEIGHT;
  
    /**
     * Default constructor.
     * Constructs a Cylinder with radius 1 and height 1.
     */
    Cylinder(): Circle(DEFAULT_RADIUS) {
      setHeight(DEFAULT_HEIGHT);
    }

    /** 
     * Constructs a Cylinder object.
     * 
     * @param radius2 The radius of a cylinder.
     * @param height2 The height of a cylinder.
     */
    Cylinder(double radius2, double height2): Circle(radius2) {
      setHeight(height2);
    }
  
    /**
     * Returns the name of this class. 
     * Overrides the name() from Circle.
     */
    char const * name() const {
      return "Cylinder";
    }

    /** 
     * Mutator method.
     * Sets the height of cylinder. 
     *
     * @param height2 The height of the cylinder. 
     */
    void setHeight(double height2) {
      if (height2 == 0) {
	height2 = DEFAULT_HEIGHT;
      } else if (height2 < 0) {
	height2 = -height2;
      }
      height = height2;
    }
  
    /** Accessor method. */
    double getHeight() const {
      return height;
    }

    /**
     * Member function to return the area of the cylinder.
     * Overrides the area() from circle. 
     */
    double area() const {
      return 2 * MY_PI * radius * height + 2 * Circle::area();
    }

    /**
     * Member function to return the volume of the cylinder. 
     */
    double volume () const {
      return Circle::area() * height;
    }


  private:

    double height;

}; // End of class Cylinder.

const double Cylinder::DEFAULT_HEIGHT = 1.0;

int main() {

  // Test the default constructor.
  // The radius should be 1.
  cout << "Test Circle class default constructor and area() function:" << endl;
  Circle circle1;
  
  // With radius 1, the expected output is:
  // Circle circle1: radius = 1
  // area = 3.14159
  cout << "Circle circle1: radius = " << circle1.getRadius() << endl;
  cout << "area = " << circle1.area() << endl;
  
  cout << "\n";
  
  // Test the overloaded constructor that makes a circle given a radius.
  // Attempt to create a circle with an invalid, negative radius.
  // The constructor should make it positive instead -10 --> 10
  cout << "Test Circle class constructor with radius (-10):" << endl;
  Circle circle2(-10);
  
  // With the radius changed to positive 10, the expected output is:
  // Test Circle class constructor with radius:
  // Circle circle2: radius = 10
  cout << "Circle circle2: radius = " << circle2.getRadius() << endl;
  
  // Further test that the class compensates for invalid radius.
  // Attempt to modify the circle with a negative radius.
  // Again, it should change -5 to positive 5.
  cout << "Test set method, set circle2 to radius -5..." << endl;
  circle2.setRadius(-5);
  // Expected output:
  // radius = 5
  // area = 78.5398
  cout << "radius = " << circle2.getRadius() << endl;
  cout << "area = " << circle2.area() << endl;
  
  cout << "\n";
  
  // For Cylinder, there is no default constructor, only a
  // constructor that takes in a given radius and height.
  // The same error corrections found in Circle should be
  // implemented in the Cylinder class as well.
  // The -30 height should be changed to positive 30.
  cout << "Test Cylinder class given radius (20) and height (-30):" << endl;
  Cylinder cylinder1(20, -30);
  
  // Expected output:
  // Cylinder cylinder1: radius = 20; height = 30
  // surface area = 6283.19
  // volume = 37699.1
  cout << "Cylinder cylinder1: radius = " << cylinder1.getRadius();
  cout << "; height = " << cylinder1.getHeight() << endl;
  cout << "surface area = " << cylinder1.area() << endl;
  cout << "volume = " << cylinder1.volume() << endl;
  
  cout << "\n";
  
  // Test error correction of the mutator methods.
  // The 0 should be changed to a 1.
  // Expected output:
  // Test set method, set cylinder1 to radius 0 and height 0...
  // radius = 1; height = 1
  // surface area = 12.5664
  // volume = 3.14159
  cout << "Test set method, set cylinder1 to radius (0) and height (0)..." << endl;
  cylinder1.setRadius(0);
  cylinder1.setHeight(0);
  cout << "radius = " << cylinder1.getRadius() << "; height = " << cylinder1.getHeight() << endl;
  cout << "surface area = " << cylinder1.area() << endl;
  cout << "volume = " << cylinder1.volume() << endl;

  return 0;
}






