#ifndef MEDIAMANAGER_H
#define MEDIAMANAGER_H

#include <map>
#include <memory>
#include <string>

#include "Photo.h"
#include "Video.h"
#include "Film.h"
#include "Group.h"

/**
 * @class MediaManager
 * @brief The MediaManager class manages multimedia objects and groups.
 *
 * The MediaManager class provides methods to create, display, play, and remove multimedia objects,
 * as well as create and remove groups. It uses a map to store multimedia objects and groups.
 */
class MediaManager {
private:
    std::map<std::string, std::shared_ptr<Multimedia>> multimediaTable; /**< Map to store multimedia objects */
    std::map<std::string, std::shared_ptr<Group<Multimedia>>> groupTable; /**< Map to store groups */

public:
    /**
     * @brief Create and add a Photo to the multimedia table.
     * @param name The name of the photo.
     * @param path The path of the photo file.
     * @param latitude The latitude of the photo location.
     * @param longitude The longitude of the photo location.
     * @return A shared pointer to the created Photo object.
     */
    std::shared_ptr<Photo> createPhoto(const std::string& name, const std::string& path, double latitude, double longitude);

    /**
     * @brief Create and add a Video to the multimedia table.
     * @param name The name of the video.
     * @param path The path of the video file.
     * @param duration The duration of the video in seconds.
     * @return A shared pointer to the created Video object.
     */
    std::shared_ptr<Video> createVideo(const std::string& name, const std::string& path, int duration);

    /**
     * @brief Create and add a Film to the multimedia table.
     * @param name The name of the film.
     * @param path The path of the film file.
     * @param duration The duration of the film in seconds.
     * @param chapters An array of chapter durations.
     * @param numberOfChapters The number of chapters in the film.
     * @return A shared pointer to the created Film object.
     */
    std::shared_ptr<Film> createFilm(const std::string& name, const std::string& path, int duration, const int* chapters, int numberOfChapters);

    /**
     * @brief Create and add a Group to the group table.
     * @param name The name of the group.
     * @return A shared pointer to the created Group object.
     */
    std::shared_ptr<Group<Multimedia>> createGroup(const std::string& name);

    /**
     * @brief Display the attributes of a multimedia object.
     * @param name The name of the multimedia object.
     * @return A string containing the attributes of the multimedia object.
     */
    std::string displayMedia(const std::string& name) const;

    /**
     * @brief Play a multimedia object.
     * @param name The name of the multimedia object.
     */
    void playMedia(const std::string& name) const;

    /**
     * @brief Remove a multimedia object.
     * @param name The name of the multimedia object.
     */
    void removeMedia(const std::string& name);

    /**
     * @brief Remove a group.
     * @param name The name of the group.
     */
    void removeGroup(const std::string& name);

    // Other necessary methods as per your project requirements
};

#endif // MEDIAMANAGER_H
