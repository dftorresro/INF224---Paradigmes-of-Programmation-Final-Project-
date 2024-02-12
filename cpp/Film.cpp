#include "Film.h"
#include <iostream>
#include <cstring> // for std::memcpy

Film::Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters)
    : Video(name, filename, duration), chapterDurations(nullptr), numberOfChapters(0) {
    setChapters(chapterDurations, numberOfChapters);
}

// Copy Constructor
Film::Film(const Film& other)
    : Video(other), chapterDurations(nullptr), numberOfChapters(other.numberOfChapters) {
    chapterDurations = new int[numberOfChapters];
    std::memcpy(chapterDurations, other.chapterDurations, numberOfChapters * sizeof(int));
}

// Copy Assignment Operator
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

// Destructor
Film::~Film() {
    delete[] chapterDurations;
}

void Film::setChapters(const int* newChapterDurations, int newNumberOfChapters) {
    delete[] chapterDurations; 
    chapterDurations = new int[newNumberOfChapters];

    for (int index = 0; index < newNumberOfChapters; ++index) {
        chapterDurations[index] = newChapterDurations[index];
    }

    numberOfChapters = newNumberOfChapters; 
}

const int* Film::getChapters() const {
    return chapterDurations;
}

int Film::getNumberOfChapters() const {
    return numberOfChapters;
}

std::string Film::display() const {
    std::string baseInfo = Video::display();
    std::string info = baseInfo + "Chapters: ";

    for (int i = 0; i < numberOfChapters; i++) {
        std::string info = info + std::to_string(chapterDurations[i]) + " ";
    }
    return info;
}
