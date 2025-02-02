#include "Driver.h"

// Constructor to initialize the driver's information
Driver::Driver(std::string firstName, std::string lastName, int driverId)
    : firstName(firstName), lastName(lastName), driverId(driverId) {}

std::string Driver::getFirstName() const {
    return firstName;
}

std::string Driver::getLastName() const {
    return lastName;
}

int Driver::getDriverId() const {
    return driverId;
}
