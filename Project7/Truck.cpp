#include "Truck.h"

// Constructor to initialize the truck's information
Truck::Truck(int truckId, Driver driver, Location location)
    : truckId(truckId), driver(driver), location(location) {}

// Function to calcluate the distance between two trucks
double Truck::distanceFrom(const Truck& otherTruck) const {
    // Extract coordinates from both trucks
    int x1 = this->location.getX();
    int y1 = this->location.getY();
    int x2 = otherTruck.getLocation().getX();
    int y2 = otherTruck.getLocation().getY();

    // Applying the distance formula to calcluate the euclidean distance
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the distance of the truck from the origin (0, 0)
double Truck::distanceFromOrigin() const {
    // Extract coordinated of this truck's location
    int x = location.getX();
    int y = location.getY();
    return sqrt(pow(x, 2) + pow(y, 2)); // Distance formula
}

// Function to display the truck's details
void Truck::displayTruckInfo() const {
    // Output the truck's ID, driver information and location
    std::cout << "Truck ID: " << truckId << "\n";
    std::cout << "Driver: " << driver.getFirstName() << " " << driver.getLastName() << "\n";
    std::cout << "Driver ID: " << driver.getDriverId() << "\n";
    std::cout << "Location: (" << location.getX() << ", " << location.getY() << ")\n";
}

int Truck::getTruckId() const {
    return truckId;
}

Location Truck::getLocation() const {
    return location;
}
