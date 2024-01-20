// Author: Daniel Felipe Torres Robles
// Last Update: 16/01/2024
// main.cpp 
//

#include <iostream>
#include <memory>

#include "Multimedia.h"
#include "Photo.h"
#include "Video.h"
#include "Film.h"

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.

int main(int argc, const char* argv[]) {

    // Table with some Multimedia objects
    Multimedia* table[4];
    table[0] = new Photo("Photo1", "chess.jpg", 40.7128, 74.0060);
    table[1] = new Video("Video1", "videonochess.mkv", 60);
    table[2] = new Photo("Photo2", "chess.jpg", 40.7128, 74.0060);
    table[3] = new Video("Video2", "videonochess.mkv", 60);

    // Playing and displaying the multimedia objects
    for (int i = 0; i < 4; i++) {
        table[i]->display();
        table[i]->play();
    }

    // Testing the film class
    int* chapters = new int[3];
    chapters[0] = 10;
    chapters[1] = 20;
    chapters[2] = 30;

    Film* film = new Film("Film1", "videonochess.mkv", 60, chapters, 3);
    film->display();
    film->play();

    return 0;
}
