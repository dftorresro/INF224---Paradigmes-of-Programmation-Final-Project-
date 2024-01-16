/**
 * @file Photo.cpp
 * @brief Implementation of the Photo class.
 */

#include "Photo.h"
#include <iostream>

// Constructor
Photo::Photo(const std::string& name, const std::string& filePath, double latitude, double longitude)
    : Multimedia(name, filePath), latitude(latitude), longitude(longitude) {}

// Getter for latitude
double Photo::getLatitude() const {
    return latitude;
}

// Setter for latitude
void Photo::setLatitude(double newlatitude) {
    latitude = newlatitude;
}

// Setter for longitude
void Photo::setLongitude(double newlongitude) {
    longitude = newlongitude;
}

// Getter for longitude
double Photo::getLongitude() const {
    return longitude;
}

// Overridden display function
void Photo::display() const {
    Multimedia::display();
    std::cout << "Latitude: " << getLatitude() << std::endl;
    std::cout << "Longitude: " << getLongitude() << std::endl;
}

// Overridden play function
void Photo::play() const {
    std::string command = "start " + getFilePath();
    system(command.data());
}