#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

Vehicle::Vehicle(std::string manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

void Vehicle::setManufacturer(std::string manufacturer) {
    this->manufacturer = manufacturer;
}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}
