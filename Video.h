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
    Video(const std::string& name, const std::string& filePath, long duration):
        Multimedia(name, filePath), duration(duration) {}

    /**
     * @return The duration of the video in seconds.
     */
    long getDuration() const {return duration;}

    /**
     * Set the duration of the video.
     * @param duration The new duration in seconds.
     */
    void setDuration(long newduration) {duration = newduration;}

    /**
     * Display the video using the parameter "duration".
     */
    void display() const override{
        
        std::cout << "Video Name: " << getName() << std::endl;
        std::cout << "File Path: " << getFilePath() << std::endl;
        std::cout << "Duration: " << getDuration() << " seconds" << std::endl;
    }
       
    /**
     * Play the video.
     */
    void play() const override {
    std::string command = "start " + getFilePath();
    system(command.data());
}
};

#endif // VIDEO_H
