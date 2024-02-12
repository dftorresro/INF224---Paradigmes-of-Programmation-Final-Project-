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
std::string Photo::display() const {
    std::string baseInfo = Multimedia::display() + " Latitude: " + std::to_string(latitude) + ", " + "Longitude: " + std::to_string(longitude);
    return baseInfo;
}

// Overridden play function
void Photo::play() const {
    std::string command = "imagej \"" + getFilePath() + "\"";
    system(command.data());
}