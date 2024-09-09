#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate the diameter
double calculateDistance() {
    double x1, y1, x2, y2;
   
    // Input points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
   
    // Calculate the distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   
    // Output the points and the distance
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);
   
    return distance;
}

// Function to calculate the circumference
double calculatePerimeter() {
    double diameter = calculateDistance(); // Get diameter
    double perimeter = PI * diameter; // Get circumference
   
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
   
    // Indicated difficulty
    return 3.0;  
}

// Function to calculate the area
double calculateArea() {
    double diameter = calculateDistance(); //Get diameter
    double radius = diameter / 2.0; // Get radius
    double area = PI * pow(radius, 2); // Get area
   
    printf("The area of the city encompassed by your request is %lf\n", area);
   
    // Indicated difficulty
    return 3.0;
}

// Function to calculate the width (equal to diameter)
double calculateWidth() {
    double diameter = calculateDistance();
   
    printf("The width of the city encompassed by your request is %lf\n", diameter);
   
    // Indicated difficulty
    return 2.0;
}

// Function to calculate the height (equal to diameter)
double calculateHeight() {
    double diameter = calculateDistance();
   
    printf("The height of the city encompassed by your request is %lf\n", diameter);
   
    // Indicated difficulty
    return 2.0; //
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
   
    return 0; // Required for autograder
}

