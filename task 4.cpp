#include<iostream>
#include<cmath>

class Hexagon {
private:
    double side;

public:
    Hexagon() {
        // Use the length of one side of hexagon as 5
        side = 5;
    }

    // Function to calculate area of hexagon
    double calcArea() {
        return 1.5 * 1.732 * side * side;
    }

    // Function to calculate perimeter of hexagon
    double calcPeri() {
        return 6 * side;
    }

    // Function to calculate sum of all angles of hexagon
    double calcAngleSum() {
        return 6 * 120;
    }

    // Function to display area, perimeter, and sum of angles of hexagon
    void display() {
        std::cout << "Hexagon - Area: " << calcArea() << ", Perimeter: " << calcPeri()
                  << ", Sum of Angles: " << calcAngleSum() << std::endl;
    }
};

class Square {
private:
    double side;

public:
    Square() {
        // Length of one side of square = 6
        side = 6;
    }

    // Function to calculate area of square
    double calcAreaSquare() {
        return side * side;
    }

    // Function to calculate perimeter of square
    double calcPeriSquare() {
        return 4 * side;
    }

    // Function to display area and perimeter of square
    void display() {
        std::cout << "Square - Area: " << calcAreaSquare() << ", Perimeter: " << calcPeriSquare() << std::endl;
    }
};

int main() {
    int choice;

    do {
        // Display menu
        std::cout << "1. Hexagon\n";
        std::cout << "2. Square\n";
        std::cout << "Enter your choice (1 or 2 to continue, any other number to exit): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Hexagon hex;
                hex.display();
                break;
            }
            case 2: {
                Square square;
                square.display();
                break;
            }
            default:
                std::cout << "Exiting program.\n";
                break;
        }
    } while (choice == 1 || choice == 2);

    return 0;
}

