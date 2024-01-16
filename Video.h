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
     * Constructor.
     * @param name Name of the video.
     * @param filePath File path of the video.
     * @param duration Duration of the video in seconds.
     */
    Video(const string& name, const string& filePath, long duration);

    /**
     * @return The duration of the video in seconds.
     */
    double getDuration() const;

    /**
     * Set the duration of the video.
     * @param duration The new duration in seconds.
     */
    void setDuration(long newduration);

    /**
     * Display the video using the parameter "duration".
     */
    void display() const override;
       
    /**
     * Play the video.
     */
    void play() const override;

};

#endif // VIDEO_H
