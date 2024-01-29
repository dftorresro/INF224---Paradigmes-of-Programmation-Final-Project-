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
#include "Group.h"
#include "MediaManager.h"

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.

int main(int argc, const char* argv[]) {

    // POINT 5 ---------------------------------------------------------------

    // // Table with some Multimedia objects
    // Multimedia* table[4];
    // table[0] = new Photo("Photo1", "chess.jpg", 40.7128, 74.0060);
    // table[1] = new Video("Video1", "videonochess.mkv", 60);
    // table[2] = new Photo("Photo2", "chess.jpg", 40.7128, 74.0060);
    // table[3] = new Video("Video2", "videonochess.mkv", 60);

    // // Playing and displaying the multimedia objects
    // for (int i = 0; i < 4; i++) {
    //     table[i]->display();
    //     table[i]->play();
    // }

    // POINT 6 ---------------------------------------------------------------

    // // Testing the film class
    // int* chapters = new int[3];
    // chapters[0] = 10;
    // chapters[1] = 20;
    // chapters[2] = 30;

    // POINT 7 ---------------------------------------------------------------

    // // Film* film = new Film("Film1", "videonochess.mkv", 60, chapters, 3);
    // // film->display();
    // // film->play();

    // // // Testing the copy constructor and copy assignment operator
    // // Film* film2 = new Film(*film);
    // // film2->display();
    // // film2->play();

    // POINT 8 ---------------------------------------------------------------

    // // Testing the group class (The class inherits from std::list) 
    // // Initialize chapter durations
    // int* chapters = new int[3]{10, 20, 30}; // Example chapter durations

    // // Create multimedia objects
    // Photo* photo1 = new Photo("Photo1", "chess.jpg", 40.7128, 74.0060);
    // Video* video1 = new Video("Video1", "videonochess.mkv", 60);
    // Film* film1 = new Film("Film1", "videonochess.mkv", 60, chapters, 3);

    // // Create groups
    // Group<Photo> GroupP("Photo Group");
    // Group<Video> GroupV("Video Group");
    // Group<Film> GroupF("Film Group");
    // Group<Multimedia> GroupM("Multimedia Group");
    // Group<Group<Multimedia>> GroupG("Group of Multimedia Groups");

    // // Add objects to groups
    // GroupM.push_back(photo1);
    // GroupM.push_back(video1);
    // GroupM.push_back(film1);

    // GroupP.push_back(photo1);
    // GroupP.push_back(photo1);
    // GroupP.push_back(photo1);

    // GroupV.push_back(video1);
    // GroupV.push_back(video1);
    // GroupV.push_back(video1);

    // GroupF.push_back(film1);
    // GroupF.push_back(film1);
    // GroupF.push_back(film1);

    // GroupG.push_back(&GroupM);
    // GroupG.push_back(&GroupM);
    
    // // Display group contents
    // std::cout << "Multimedia Group Contents:\n";
    // GroupM.display();

    // std::cout << "\nPhoto Group Contents:\n";
    // GroupP.display();

    // std::cout << "\nVideo Group Contents:\n";
    // GroupV.display();

    // std::cout << "\nFilm Group Contents:\n";
    // GroupF.display();

    // std::cout << "\nGroup of Multimedia Groups Contents:\n";
    // GroupG.display();

    // // Clean up dynamic memory
    // delete photo1;
    // delete video1;
    // delete film1;

    // delete[] chapters; // Clean up the chapters array

    // return 0;

    // POINT 9 ---------------------------------------------------------------

    // // Testing the group class (The class inherits from std::list) 
    // // Initialize chapter durations
    // std::unique_ptr<int[]> chapters(new int[3]);
    // chapters[0] = 10;
    // chapters[1] = 20;
    // chapters[2] = 30;

    // // Create multimedia objects
    // auto photo1 = std::make_shared<Photo>("Photo1", "chess.jpg", 40.7128, 74.0060);
    // auto video1 = std::make_shared<Video>("Video1", "videonochess.mkv", 60);
    // auto film1 = std::make_shared<Film>("Film1", "videonochess.mkv", 60, chapters.get(), 3);

    // // Create groups
    // auto GroupP = std::make_shared<Group<Photo>>("Photo Group");
    // auto GroupV = std::make_shared<Group<Video>>("Video Group");
    // auto GroupF = std::make_shared<Group<Film>>("Film Group");
    // auto GroupM = std::make_shared<Group<Multimedia>>("Multimedia Group");
    // auto GroupG = std::make_shared<Group<Group<Multimedia>>>("Group of Multimedia Groups");

    // // Add objects to groups
    // GroupM->push_back(photo1);
    // GroupM->push_back(video1);
    // GroupM->push_back(film1);

    // GroupP->push_back(photo1);
    // GroupP->push_back(photo1);
    // GroupP->push_back(photo1);

    // GroupV->push_back(video1);
    // GroupV->push_back(video1);
    // GroupV->push_back(video1);

    // GroupF->push_back(film1);
    // GroupF->push_back(film1);
    // GroupF->push_back(film1);

    // GroupG->push_back(GroupM);
    // GroupG->push_back(GroupM);

    // // Display group contents
    // std::cout << "Multimedia Group Contents:\n";
    // GroupM->display();

    // std::cout << "\nPhoto Group Contents:\n";
    // GroupP->display();

    // std::cout << "\nVideo Group Contents:\n";
    // GroupV->display();

    // std::cout << "\nFilm Group Contents:\n";
    // GroupF->display();

    // std::cout << "\nGroup of Multimedia Groups Contents:\n";
    // GroupG->display();

    // // No need to manually delete the objects, as smart pointers handle this automatically

    // POINT 10 ---------------------------------------------------------------

    MediaManager manager;

    // Initialize chapter durations
    int chapters[3] = {10, 20, 30};

    // Use MediaManager to create multimedia objects
    auto photo1 = manager.createPhoto("Photo1", "chess.jpg", 40.7128, 74.0060);
    auto video1 = manager.createVideo("Video1", "videonochess.mkv", 60);
    auto film1 = manager.createFilm("Film1", "videonochess.mkv", 60, chapters, 3);

    // Use MediaManager to create groups
    auto groupP = manager.createGroup("Photo Group");
    auto groupV = manager.createGroup("Video Group");
    auto groupF = manager.createGroup("Film Group");
    auto groupM = manager.createGroup("Multimedia Group");

    // Add objects to groups using MediaManager
    groupM->push_back(photo1);
    groupM->push_back(video1);
    groupM->push_back(film1);

    groupP->push_back(photo1);
    groupV->push_back(video1);
    groupF->push_back(film1);

    // Display group contents
    std::cout << "Multimedia Group Contents:\n";
    groupM->display();

    std::cout << "\nPhoto Group Contents:\n";
    groupP->display();

    std::cout << "\nVideo Group Contents:\n";
    groupV->display();

    std::cout << "\nFilm Group Contents:\n";
    groupF->display();

    // Play a multimedia object
    manager.playMedia("Photo1");

    // Remove a multimedia object
    manager.removeMedia("Photo1");

    // Remove a group
    manager.removeGroup("Photo Group");

    return 0;
}
