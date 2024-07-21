//Hunter Casey
//July 21 2024
//CIS 1202

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;

    // Vehicle object
    cout << "Enter the manufacturer for the vehicle: ";
    getline(cin, manufacturer);
    cout << "Enter the year built for the vehicle: ";
    cin >> yearBuilt;
    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "Vehicle Information: " << endl;
    vehicle.displayInfo();

    cout << endl;

    // Car object
    cout << "Enter the manufacturer for the car: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, manufacturer);
    cout << "Enter the year built for the car: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors for the car: ";
    cin >> numberOfDoors;
    Car car(manufacturer, yearBuilt, numberOfDoors);
    cout << "Car Information: " << endl;
    car.displayInfo();

    cout << endl;

    // Truck object
    cout << "Enter the manufacturer for the truck: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, manufacturer);
    cout << "Enter the year built for the truck: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity for the truck: ";
    cin >> towingCapacity;
    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "Truck Information: " << endl;
    truck.displayInfo();

    return 0;
}
