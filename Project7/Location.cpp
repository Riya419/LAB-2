#include "Location.h"

// Constructor to initialize the x and y coordinates of the location
Location::Location(int x, int y) : x(x), y(y) {}

int Location::getX() const {
    return x;
}

int Location::getY() const {
    return y;
}
