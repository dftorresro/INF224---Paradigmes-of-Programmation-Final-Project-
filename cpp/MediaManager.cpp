/**
 * @file MediaManager.cpp
 * @brief Implementation file for the MediaManager class.
 * 
 * This file contains the implementation of the MediaManager class, which is responsible for managing multimedia objects and groups.
 * It provides methods for creating, displaying, playing, and removing multimedia objects and groups.
 */

#include "MediaManager.h"
#include <iostream>

// Constructor implementations for creating multimedia objects

/**
 * @brief Create a photo object and add it to the multimedia table.
 * 
 * @param name The name of the photo.
 * @param path The path of the photo file.
 * @param latitude The latitude of the photo location.
 * @param longitude The longitude of the photo location.
 * @return A shared pointer to the created photo object.
 */
std::shared_ptr<Photo> MediaManager::createPhoto(const std::string& name, const std::string& path, double latitude, double longitude) {
    auto photo = std::make_shared<Photo>(name, path, latitude, longitude);
    multimediaTable[name] = photo;
    return photo;
}

/**
 * @brief Create a video object and add it to the multimedia table.
 * 
 * @param name The name of the video.
 * @param path The path of the video file.
 * @param duration The duration of the video in seconds.
 * @return A shared pointer to the created video object.
 */
std::shared_ptr<Video> MediaManager::createVideo(const std::string& name, const std::string& path, int duration) {
    auto video = std::make_shared<Video>(name, path, duration);
    multimediaTable[name] = video;
    return video;
}

/**
 * @brief Create a film object and add it to the multimedia table.
 * 
 * @param name The name of the film.
 * @param path The path of the film file.
 * @param duration The duration of the film in seconds.
 * @param chapters An array of chapter durations.
 * @param numberOfChapters The number of chapters in the film.
 * @return A shared pointer to the created film object.
 */
std::shared_ptr<Film> MediaManager::createFilm(const std::string& name, const std::string& path, int duration, const int* chapters, int numberOfChapters) {
    auto film = std::make_shared<Film>(name, path, duration, chapters, numberOfChapters);
    multimediaTable[name] = film;
    return film;
}

// Constructor implementation for creating a group

/**
 * @brief Create a group object and add it to the group table.
 * 
 * @param name The name of the group.
 * @return A shared pointer to the created group object.
 */
std::shared_ptr<Group<Multimedia>> MediaManager::createGroup(const std::string& name) {
    auto group = std::make_shared<Group<Multimedia>>(name);
    groupTable[name] = group;
    return group;
}

/**
 * @brief Display the attributes of a multimedia object.
 * 
 * @param name The name of the multimedia object.
 * @return A string containing the attributes of the multimedia object.
 *         If the multimedia object is not found, returns "Media not found".
 */
std::string MediaManager::displayMedia(const std::string& name) const {
    auto it = multimediaTable.find(name);
    if (it != multimediaTable.end()) {
        return it->second->display();
    } else {
        return "Media not found";
    }
}

/**
 * @brief Play a multimedia object.
 * 
 * @param name The name of the multimedia object.
 */
void MediaManager::playMedia(const std::string& name) const {
    auto it = multimediaTable.find(name);
    if (it != multimediaTable.end()) {
        it->second->play();
    } else {
        std::cout << "Media not found: " << name << std::endl;
    }
}

/**
 * @brief Remove a multimedia object from the multimedia table.
 * 
 * @param name The name of the multimedia object to be removed.
 */
void MediaManager::removeMedia(const std::string& name) {
    if (multimediaTable.erase(name) == 0) {
        std::cout << "Media not found or already removed: " << name << std::endl;
    }
}

/**
 * @brief Remove a group from the group table.
 * 
 * @param name The name of the group to be removed.
 */
void MediaManager::removeGroup(const std::string& name) {
    if (groupTable.erase(name) == 0) {
        std::cout << "Group not found or already removed: " << name << std::endl;
    }
}


