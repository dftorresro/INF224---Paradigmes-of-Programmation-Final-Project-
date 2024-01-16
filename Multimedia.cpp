/**
 * @file Multimedia.cpp
 * @brief Implementation of the Multimedia class.
 */

#include "Multimedia.h"
#include <string>
#include <iostream>

/**
 * Constructor.
 * @param name Name of the multimedia object.
 * @param filePath File path of the multimedia object.
 */
Multimedia::Multimedia(const std::string& name, const std::string& filePath) 
    : name(name), filePath(filePath) {}

/**
 * Destructor.
 */
Multimedia::~Multimedia() {}

/**
 * Getter for name.
 * @return The name of the multimedia object.
 */
std::string Multimedia::getName() const {return name;}

/**
 * Getter for file path.
 * @return The file path of the multimedia object.
 */
std::string Multimedia::getFilePath() const {return filePath;}

/**
 * Display the multimedia object.
 */
void Multimedia::display() const {
    std::cout << "Name: " << name << "\nFile Path: " << filePath << std::endl;
}

/**
 * Play the multimedia object.
 */
void Multimedia::play() const {
    std::cout << "Playing " << filePath << std::endl;
}




