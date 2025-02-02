#pragma once

#ifndef TRUCK_H
#define TRUCK_H

#include "Driver.h"
#include "Location.h"
#include <cmath>
#include <iostream>

// Truck class represents a truck with a driver, driver ID, and a location
class Truck {
public:
    Truck(int truckId, Driver driver, Location location);

    double distanceFrom(const Truck& otherTruck) const;
    double distanceFromOrigin() const;

    void displayTruckInfo() const;
    int getTruckId() const;
    Location getLocation() const;

private:
    int truckId;
    Driver driver;
    Location location;
};

#endif
