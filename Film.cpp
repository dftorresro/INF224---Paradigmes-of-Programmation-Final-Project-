#include "Film.h"
#include <iostream>

Film::Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters)
    : Video(name, filename, duration), chapterDurations(nullptr), numberOfChapters(0) {
    
    setChapters(chapterDurations, numberOfChapters);
    
}

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

void Film::display() const {
    Video::display();
    std::cout << "Chapters: ";

    for (int i = 0; i < numberOfChapters; i++) {
        std::cout << chapterDurations[i] << " ";
    }

    std::cout << std::endl;
}