#ifndef FILM_H
#define FILM_H

#include "Video.h"
#include <string>

/**
 * @class Film
 * @brief Represents a film, which is a type of video with chapters.
 * 
 * The Film class inherits from the Video class and adds the functionality to store and retrieve chapter durations.
 */
class Film : public Video {
    
private:
    int* chapterDurations; /**< An array of chapter durations */
    int numberOfChapters; /**< The number of chapters in the film */

public:
    /**
     * @brief Constructor for the Film class.
     * @param name The name of the film.
     * @param filename The filename of the film.
     * @param duration The duration of the film in seconds.
     * @param chapterDurations An array of chapter durations.
     * @param numberOfChapters The number of chapters in the film.
     */
    Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters);

    /**
     * @brief Copy constructor for the Film class.
     * @param other The Film object to be copied.
     */
    Film(const Film& other);

    /**
     * @brief Copy assignment operator for the Film class.
     * @param other The Film object to be assigned.
     * @return A reference to the assigned Film object.
     */
    Film& operator=(const Film& other);

    /**
     * @brief Destructor for the Film class.
     */
    ~Film();

    /**
     * @brief Sets the chapters of the film.
     * @param chapterDurations An array of chapter durations.
     * @param numberOfChapters The number of chapters in the film.
     */
    void setChapters(const int* chapterDurations, int numberOfChapters);

    /**
     * @brief Gets the chapters of the film.
     * @return A constant pointer to the array of chapter durations.
     */
    const int* getChapters() const;

    /**
     * @brief Gets the number of chapters in the film.
     * @return The number of chapters in the film.
     */
    int getNumberOfChapters() const;

    /**
     * @brief Displays information about the film.
     * @return A string containing the film's information.
     */
    std::string display() const override;
};

#endif // FILM_H