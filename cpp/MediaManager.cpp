#include "MediaManager.h"
#include <iostream>

// Constructor implementations for creating multimedia objects
std::shared_ptr<Photo> MediaManager::createPhoto(const std::string& name, const std::string& path, double latitude, double longitude) {
    auto photo = std::make_shared<Photo>(name, path, latitude, longitude);
    multimediaTable[name] = photo;
    return photo;
}

std::shared_ptr<Video> MediaManager::createVideo(const std::string& name, const std::string& path, int duration) {
    auto video = std::make_shared<Video>(name, path, duration);
    multimediaTable[name] = video;
    return video;
}

std::shared_ptr<Film> MediaManager::createFilm(const std::string& name, const std::string& path, int duration, const int* chapters, int numberOfChapters) {
    auto film = std::make_shared<Film>(name, path, duration, chapters, numberOfChapters);
    multimediaTable[name] = film;
    return film;
}

// Constructor implementation for creating a group
std::shared_ptr<Group<Multimedia>> MediaManager::createGroup(const std::string& name) {
    auto group = std::make_shared<Group<Multimedia>>(name);
    groupTable[name] = group;
    return group;
}

// Display the attributes of a multimedia object
std::string MediaManager::displayMedia(const std::string& name) const {
    auto it = multimediaTable.find(name);
    if (it != multimediaTable.end()) {
        return it->second->display();
    } else {
        return "Media not found";
    }
}

// Play a multimedia object
void MediaManager::playMedia(const std::string& name) const {
    auto it = multimediaTable.find(name);
    if (it != multimediaTable.end()) {
        it->second->play();
    } else {
        std::cout << "Media not found: " << name << std::endl;
    }
}

// Remove a multimedia object
void MediaManager::removeMedia(const std::string& name) {
    if (multimediaTable.erase(name) == 0) {
        std::cout << "Media not found or already removed: " << name << std::endl;
    }
}

// Remove a group
void MediaManager::removeGroup(const std::string& name) {
    if (groupTable.erase(name) == 0) {
        std::cout << "Group not found or already removed: " << name << std::endl;
    }
}

// Other necessary method implementations as per your project requirements
