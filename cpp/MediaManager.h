#ifndef MEDIAMANAGER_H
#define MEDIAMANAGER_H

#include <map>
#include <memory>
#include <string>

#include "Photo.h"
#include "Video.h"
#include "Film.h"
#include "Group.h"

class MediaManager {
private:
    std::map<std::string, std::shared_ptr<Multimedia>> multimediaTable;
    std::map<std::string, std::shared_ptr<Group<Multimedia>>> groupTable;

public:
    // Create and add a Photo to the multimedia table
    std::shared_ptr<Photo> createPhoto(const std::string& name, const std::string& path, double latitude, double longitude);

    // Create and add a Video to the multimedia table
    std::shared_ptr<Video> createVideo(const std::string& name, const std::string& path, int duration);

    // Create and add a Film to the multimedia table
    std::shared_ptr<Film> createFilm(const std::string& name, const std::string& path, int duration, const int* chapters, int numberOfChapters);

    // Create and add a Group to the group table
    std::shared_ptr<Group<Multimedia>> createGroup(const std::string& name);

    // Display the attributes of a multimedia object
    std::string displayMedia(const std::string& name) const;

    // Play a multimedia object
    void playMedia(const std::string& name) const;

    // Remove a multimedia object
    void removeMedia(const std::string& name);

    // Remove a group
    void removeGroup(const std::string& name);

    // Other necessary methods as per your project requirements
};

#endif // MEDIAMANAGER_H
