#include "Video.h"
#include <iostream>

// Constructor
Video::Video(const std::string& name, const std::string& filePath, long duration)
    : Multimedia(name, filePath), duration(duration) {}

// Copy Constructor
Video::Video(const Video& other)
    : Multimedia(other), duration(other.duration) {}

// Getter for duration
double Video::getDuration() const {
    return duration;
}

// Setter for duration
void Video::setDuration(long newDuration) {
    duration = newDuration;
}

// Overridden display function
std::string Video::display() const {
    std::string baseInfo = Multimedia::display() + " Duration: " + std::to_string(duration) + " seconds";
    return baseInfo;
}

// Overridden play function
void Video::play() const {
    std::string command = "mpv \"" + getFilePath() + "\"";
    system(command.data());
}