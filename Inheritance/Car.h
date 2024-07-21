//Hunter Casey
//July 21 2024
//CIS 1202

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car();
    Car(std::string manufacturer, int yearBuilt, int numberOfDoors);

    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors() const;

    void displayInfo() const override;
};

#endif
