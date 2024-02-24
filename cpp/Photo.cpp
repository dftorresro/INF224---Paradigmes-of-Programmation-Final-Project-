/**
 * @file Photo.cpp
 * @brief Implementation of the Photo class.
 */

#include "Photo.h"
#include <iostream>

/**
 * @class Photo
 * @brief Represents a photo object derived from the Multimedia class.
 *
 * The Photo class represents a photo object that inherits from the Multimedia class.
 * It contains additional attributes for latitude and longitude coordinates.
 */

// Constructor
Photo::Photo(const std::string& name, const std::string& filePath, double latitude, double longitude)
    : Multimedia(name, filePath), latitude(latitude), longitude(longitude) {}

/**
 * @brief Getter for the latitude coordinate.
 * @return The latitude coordinate of the photo.
 */
double Photo::getLatitude() const {
    return latitude;
}

/**
 * @brief Setter for the latitude coordinate.
 * @param newlatitude The new latitude coordinate to set.
 */
void Photo::setLatitude(double newlatitude) {
    latitude = newlatitude;
}

/**
 * @brief Setter for the longitude coordinate.
 * @param newlongitude The new longitude coordinate to set.
 */
void Photo::setLongitude(double newlongitude) {
    longitude = newlongitude;
}

/**
 * @brief Getter for the longitude coordinate.
 * @return The longitude coordinate of the photo.
 */
double Photo::getLongitude() const {
    return longitude;
}

/**
 * @brief Overridden display function.
 * @return A string containing the photo's base information along with its latitude and longitude coordinates.
 */
std::string Photo::display() const {
    std::string baseInfo = Multimedia::display() + " Latitude: " + std::to_string(latitude) + ", " + "Longitude: " + std::to_string(longitude);
    return baseInfo;
}

/**
 * @brief Overridden play function.
 *
 * This function plays the photo by opening it using an external program.
 * It uses the system command to execute the appropriate command for opening the photo file.
 */
void Photo::play() const {
    std::string command = "imagej \"" + getFilePath() + "\"";
    system(command.data());
}