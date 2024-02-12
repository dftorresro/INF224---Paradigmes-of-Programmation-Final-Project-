#ifndef FILM_H
#define FILM_H

#include "Video.h"
#include <string>

class Film : public Video {
    
private:
    int* chapterDurations;
    int numberOfChapters;

public:
    // Constructor
    Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters);

    // Copy Constructor
    Film(const Film& other);

    // Copy Assignment Operator
    Film& operator=(const Film& other);

    // Destructor
    ~Film();

    void setChapters(const int* chapterDurations, int numberOfChapters);

    const int* getChapters() const;

    int getNumberOfChapters() const;

    std::string display() const override;
};


#endif // FILM_H