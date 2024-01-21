/**
 * @file Multimedia.cpp
 * @brief Implementation of the Multimedia class.
 */

#include "Multimedia.h"
#include <string>
#include <iostream>

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.

/**
 * Constructor.
 * @param name Name of the multimedia object.
 * @param filePath File path of the multimedia object.
 */
Multimedia::Multimedia(const std::string& name, const std::string& filePath) 
    : name(name), filePath(filePath) {}

/**
 * Copy constructor.
 * @param other The multimedia object to copy.
 */
Multimedia::Multimedia(const Multimedia& other) 
    : name(other.name), filePath(other.filePath) {}

/**
 * Destructor.
 */
Multimedia::~Multimedia() {}

/**
 * Getter for name.
 * @return The name of the multimedia object.
 */
string Multimedia::getName() const {return name;}

/**
 * Getter for file path.
 * @return The file path of the multimedia object.
 */
string Multimedia::getFilePath() const {return filePath;}

/**
 * Display the multimedia object.
 */
void Multimedia::display() const {
    cout << "Name: " << name << "\nFile Path: " << filePath << std::endl;
}

/**
 * Play the multimedia object.
 */
void Multimedia::play() const {
    cout << "Playing " << filePath << std::endl;
}




