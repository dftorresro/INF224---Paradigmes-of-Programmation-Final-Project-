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
     * @brief Constructor.
     * @param name Name of the photo.
     * @param filePath File path of the photo.
     * @param latitude Latitude of the photo.
     * @param longitude Longitude of the photo.
     */
    Photo(const string& name, const string& filePath, double latitude, double longitude);

    /**
     * @brief Get the latitude of the photo.
     * @return The latitude of the photo.
     */
    double getLatitude() const;

    /**
     * @brief Set the latitude of the photo.
     * @param latitude The new latitude.
     */
    void setLatitude(double newlatitude);

    /**
     * @brief Get the longitude of the photo.
     * @return The longitude of the photo.
     */
    double getLongitude() const;

    /**
     * @brief Set the longitude of the photo.
     * @param longitude The new longitude.
     */
    void setLongitude(double newlongitude);

    /**
     * @brief Display the photo using the parameters "latitude" and "longitude".
     * @return A string representing the display of the photo.
     */
    std::string display() const override;

    /**
     * @brief Play the photo.
     */
    void play() const override;
};

#endif // PHOTO_H