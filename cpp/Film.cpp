/**
 * @file Film.cpp
 * @brief Implementation file for the Film class.
 */

#include "Film.h"
#include <iostream>
#include <cstring> // for std::memcpy

/**
 * @brief Constructs a Film object with the given parameters.
 * @param name The name of the film.
 * @param filename The filename of the film.
 * @param duration The duration of the film.
 * @param chapterDurations An array of chapter durations.
 * @param numberOfChapters The number of chapters in the film.
 */
Film::Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters)
    : Video(name, filename, duration), chapterDurations(nullptr), numberOfChapters(0) {
    setChapters(chapterDurations, numberOfChapters);
}

/**
 * @brief Copy constructor for the Film class.
 * @param other The Film object to be copied.
 */
Film::Film(const Film& other)
    : Video(other), chapterDurations(nullptr), numberOfChapters(other.numberOfChapters) {
    chapterDurations = new int[numberOfChapters];
    std::memcpy(chapterDurations, other.chapterDurations, numberOfChapters * sizeof(int));
}

/**
 * @brief Copy assignment operator for the Film class.
 * @param other The Film object to be assigned.
 * @return A reference to the assigned Film object.
 */
Film& Film::operator=(const Film& other) {
    if (this != &other) { // Check for self-assignment
        Video::operator=(other); // Assign base class parts
        delete[] chapterDurations; // Free old memory

        numberOfChapters = other.numberOfChapters;
        chapterDurations = new int[numberOfChapters];
        std::memcpy(chapterDurations, other.chapterDurations, numberOfChapters * sizeof(int));
    }
    return *this;
}

/**
 * @brief Destructor for the Film class.
 */
Film::~Film() {
    delete[] chapterDurations;
}

/**
 * @brief Sets the chapters of the film.
 * @param newChapterDurations An array of new chapter durations.
 * @param newNumberOfChapters The new number of chapters in the film.
 */
void Film::setChapters(const int* newChapterDurations, int newNumberOfChapters) {
    delete[] chapterDurations; 
    chapterDurations = new int[newNumberOfChapters];

    for (int index = 0; index < newNumberOfChapters; ++index) {
        chapterDurations[index] = newChapterDurations[index];
    }

    numberOfChapters = newNumberOfChapters; 
}

/**
 * @brief Gets the chapters of the film.
 * @return A pointer to the array of chapter durations.
 */
const int* Film::getChapters() const {
    return chapterDurations;
}

/**
 * @brief Gets the number of chapters in the film.
 * @return The number of chapters.
 */
int Film::getNumberOfChapters() const {
    return numberOfChapters;
}

/**
 * @brief Displays the information of the film.
 * @return A string containing the film information.
 */
std::string Film::display() const {
    std::string baseInfo = Video::display();
    std::string info = baseInfo + "Chapters: ";

    for (int i = 0; i < numberOfChapters; i++) {
        std::string info = info + std::to_string(chapterDurations[i]) + " ";
    }
    return info;
}
