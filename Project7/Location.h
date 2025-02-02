#pragma once

#ifndef LOCATION_H
#define LOCATION_H

// Location class represents the position of the truck (x, y)
class Location {
public:
    Location(int x, int y);

    int getX() const;
    int getY() const;

private:
    int x;
    int y;
};

#endif
