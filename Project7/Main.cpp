// Lab 2 - Group 17 - Riya Chauhan

#include <iostream>
#include "Truck.h"
#include "Driver.h"
#include "Location.h"

int main() {
    // Create Driver objects with first name, last name and ID (sample data)
    Driver driver1("Liz", "Brian", 35);
    Driver driver2("Mike", "Smith", 69);

    // Create Location objects with x and y coordinates (sample data)
    Location location1(2, 3);
    Location location2(5, 2);

    // Create Truck objects with truck ID, driver and location (sample data)
    Truck truck1(178534, driver1, location1);
    Truck truck2(245817, driver2, location2);

    // Calculate the distances between the two trucks and their distances to the origin
    double distanceBetweenTrucks = truck1.distanceFrom(truck2);
    double distanceFromTruck1ToOrigin = truck1.distanceFromOrigin();   // Calculating distance from truck1 from origin
    double distanceFromTruck2ToOrigin = truck2.distanceFromOrigin();   // Calculating distance from truk2 from the origin 

    // Output the required results (distances)
    std::cout << "The distance between the two trucks is: " << distanceBetweenTrucks << " units.\n";
    std::cout << "The distance between the truck (with ID = 178534) and the origin is: " << distanceFromTruck1ToOrigin << " units.\n";
    std::cout << "The distance between the truck (with ID = 245817) and the origin is: " << distanceFromTruck2ToOrigin << " units.\n";

    return 0;
}

