/**
 * @file Video.cpp
 * @brief Implementation file for the Video class.
 */

#include "Video.h"
#include <iostream>

// Constructor
Video::Video(const std::string& name, const std::string& filePath, long duration)
    : Multimedia(name, filePath), duration(duration) {}

// Copy Constructor
Video::Video(const Video& other)
    : Multimedia(other), duration(other.duration) {}

// Getter for duration
/**
 * @brief Get the duration of the video.
 * @return The duration of the video in seconds.
 */
double Video::getDuration() const {
    return duration;
}

// Setter for duration
/**
 * @brief Set the duration of the video.
 * @param newDuration The new duration of the video in seconds.
 */
void Video::setDuration(long newDuration) {
    duration = newDuration;
}

// Overridden display function
/**
 * @brief Display the information of the video.
 * @return A string containing the name, file path, and duration of the video.
 */
std::string Video::display() const {
    std::string baseInfo = Multimedia::display() + " Duration: " + std::to_string(duration) + " seconds";
    return baseInfo;
}

// Overridden play function
/**
 * @brief Play the video using the mpv player.
 */
void Video::play() const {
    std::string command = "mpv \"" + getFilePath() + "\"";
    system(command.data());
}