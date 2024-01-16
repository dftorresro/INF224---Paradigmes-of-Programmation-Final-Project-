/**
 * @file Photo.h
 * @brief Class for representing a photo in a multimedia system.
 */

#ifndef PHOTO_H
#define PHOTO_H

#include "Multimedia.h"
#include <string>

/**
 * @class Photo
 * @brief Class representing a photo.
 */
class Photo : public Multimedia {

private:
    double latitude; ///< Latitude of the photo.
    double longitude; ///< Longitude of the photo.

public:
   
    /**
     * Constructor.
     * @param name Name of the photo.
     * @param filePath File path of the photo.
     * @param latitude Latitude of the photo.
     * @param longitude Longitude of the photo.
     */
    Photo(const std::string& name, const std::string& filePath, double latitude, double longitude):
        Multimedia(name, filePath), latitude(latitude), longitude(longitude) {}

    /**
     * @return The latitude of the photo.
     */
    double getLatitude() const{ return latitude; }

    /**
     * Set the latitude of the photo.
     * @param latitude The new latitude.
     */
    void setLatitude(double newlatitude) {latitude = newlatitude;}

    /**
     * @return The longitude of the photo.
     */
    double getLongitude() const {return longitude;}

    /**
     * Set the longitude of the photo.
     * @param longitude The new longitude.
     */
    void setLongitude(double newlongitude) {longitude = newlongitude;}

    /**
     * Display the photo using the parameters "latitude" and "longitude".
     */
    void display() const override{

        std::cout << "Photo Name: " << getName() << std::endl;
        std::cout << "File Path: " << getFilePath() << std::endl;
        std::cout << "Latitude: " << getLatitude() << std::endl;
        std::cout << "Longitude: " << getLongitude() << std::endl;
    }

    /**
     * Play the photo.
     */
    void play() const override {
    std::string command = "start " + getFilePath();
    system(command.data());
    }
};

#endif // PHOTO_H