// Author: Daniel Felipe Torres Roblles
// main.cpp
// Created on 21/10/2018
//
#include <iostream>
#include <memory>

#include "Multimedia.h"
#include "Photo.h"
#include "Video.h"

int main(int argc, const char* argv[]) {

    // Instances of Multimedia using smart pointers for automatic memory management
    Photo multimedia1("Photo1", "chess.jpg", 40.7128, 74.0060);
    Video multimedia2("Video1", "videonochess.mkv", 60);

    // Display function
    std::cout << "Displaying Multimedia Object 1:" << std::endl;
    multimedia1.display();
    std::cout << "\nDisplaying Multimedia Object 2:" << std::endl;
    multimedia2.display();

    // Play function
    std::cout << "\nPlaying Multimedia Object 1:" << std::endl;
    multimedia1.play();
    std::cout << "\nPlaying Multimedia Object 2:" << std::endl;
    multimedia2.play();

    return 0;
}
