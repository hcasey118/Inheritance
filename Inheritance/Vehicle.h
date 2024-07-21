#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(std::string manufacturer, int yearBuilt);

    void setManufacturer(std::string manufacturer);
    std::string getManufacturer() const;

    void setYearBuilt(int yearBuilt);
    int getYearBuilt() const;

    virtual void displayInfo() const;
};

#endif
