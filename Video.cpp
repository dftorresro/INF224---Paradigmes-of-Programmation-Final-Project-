#include "Video.h"
#include <iostream>

// Constructor
Video::Video(const std::string& name, const std::string& filePath, long duration)
    : Multimedia(name, filePath), duration(duration) {}

// Getter for duration
double Video::getDuration() const {
    return duration;
}

// Setter for duration
void Video::setDuration(long newDuration) {
    duration = newDuration;
}

// Overridden display function
void Video::display() const {
    Multimedia::display();
    std::cout << "Duration: " << getDuration() << " seconds" << std::endl;
}

// Overridden play function
void Video::play() const {
    std::string command = "start " + getFilePath();
    system(command.data());
}