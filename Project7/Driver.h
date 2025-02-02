#pragma once

#ifndef DRIVER_H
#define DRIVER_H

#include <string>

// Driver class represents a driver with a first name, last name and driver ID
class Driver {
public:
    // Constructor to initialize the driver 
    Driver(std::string firstName, std::string lastName, int driverId);

    std::string getFirstName() const; // function to retrieve the driver's first name
    std::string getLastName() const;  // function to retrieve the driver's last name
    int getDriverId() const;  // retrive the driver's ID

private:
    // Private member variable to store driver's information
    std::string firstName;
    std::string lastName;
    int driverId;
};

#endif
