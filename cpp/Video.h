/**
 * @file Video.h
 * @brief Class for representing a video in a multimedia system.
 */

#ifndef VIDEO_H
#define VIDEO_H

#include "Multimedia.h"

/**
 * @class Video
 * @brief Class representing a video.
 */
class Video : public Multimedia {
private:
    long duration; ///< Duration of the video in seconds.

public:

    /**
     * @brief Constructor.
     * @param name Name of the video.
     * @param filePath File path of the video.
     * @param duration Duration of the video in seconds.
     */
    Video(const string& name, const string& filePath, long duration);

    /**
     * @brief Copy constructor.
     * @param other The video to copy.
     */
    Video(const Video& other);

    /**
     * @brief Get the duration of the video.
     * @return The duration of the video in seconds.
     */
    double getDuration() const;

    /**
     * @brief Set the duration of the video.
     * @param duration The new duration in seconds.
     */
    void setDuration(long newduration);

    /**
     * @brief Display the video.
     * @return A string representation of the video.
     */
    std::string display() const override;
       
    /**
     * @brief Play the video.
     */
    void play() const override;

};

#endif // VIDEO_H
