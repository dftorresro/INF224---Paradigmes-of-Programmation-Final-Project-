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
    Photo(const string& name, const string& filePath, double latitude, double longitude);

    /**
     * @return The latitude of the photo.
     */
    double getLatitude() const;

    /**
     * Set the latitude of the photo.
     * @param latitude The new latitude.
     */
    void setLatitude(double newlatitude);

    /**
     * @return The longitude of the photo.
     */
    double getLongitude() const;

    /**
     * Set the longitude of the photo.
     * @param longitude The new longitude.
     */
    void setLongitude(double newlongitude);

    /**
     * Display the photo using the parameters "latitude" and "longitude".
     */
    void display() const override;

    /**
     * Play the photo.
     */
    void play() const override;
};

#endif // PHOTO_H