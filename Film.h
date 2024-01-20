#include "Video.h"

class Film : public Video {
    
private:
    int* chapterDurations;
    int numberOfChapters;

public:
    Film(const std::string& name, const std::string& filename, int duration, const int* chapterDurations, int numberOfChapters);

    ~Film();

    void setChapters(const int* chapterDurations, int numberOfChapters);

    const int* getChapters() const;

    int getNumberOfChapters() const;

    void display() const override;
};