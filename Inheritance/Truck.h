#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck();
    Truck(std::string manufacturer, int yearBuilt, int towingCapacity);

    void setTowingCapacity(int towingCapacity);
    int getTowingCapacity() const;

    void displayInfo() const override;
};

#endif
