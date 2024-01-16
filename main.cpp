// Author: Daniel Felipe Torres Robles
// Last Update: 16/01/2024
// main.cpp 
//

#include <iostream>
#include <memory>

#include "Multimedia.h"
#include "Photo.h"
#include "Video.h"

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.

int main(int argc, const char* argv[]) {

    // Instances of Multimedia using smart pointers for automatic memory management
    Photo photo1("Photo1", "chess.jpg", 40.7128, 74.0060);
    Video video1("Video1", "videonochess.mkv", 60);

    // Display function
    photo1.display();
    video1.display();

    // Play function
    photo1.play();
    video1.play();

    return 0;
}
