/**
 * @file Multimedia.cpp
 * @brief Implementation of the Multimedia class.
 */

#include "Multimedia.h"
#include <string>
#include <iostream>

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.

/**
 * @class Multimedia
 * @brief Represents a multimedia object.
 *
 * The Multimedia class provides functionality to create and manipulate multimedia objects.
 * It stores the name and file path of the multimedia object, and provides methods to access and display this information.
 */

/**
 * @brief Constructor.
 * @param name Name of the multimedia object.
 * @param filePath File path of the multimedia object.
 */
Multimedia::Multimedia(const std::string& name, const std::string& filePath) 
    : name(name), filePath(filePath) {}

/**
 * @brief Copy constructor.
 * @param other The multimedia object to copy.
 */
Multimedia::Multimedia(const Multimedia& other) 
    : name(other.name), filePath(other.filePath) {}

/**
 * @brief Destructor.
 */
Multimedia::~Multimedia() {}

/**
 * @brief Getter for name.
 * @return The name of the multimedia object.
 */
string Multimedia::getName() const {return name;}

/**
 * @brief Getter for file path.
 * @return The file path of the multimedia object.
 */
string Multimedia::getFilePath() const {return filePath;}

/**
 * @brief Display the multimedia object.
 * @return A string representation of the multimedia object.
 */
std::string Multimedia::display() const {
    std::string info = "Name: " + name + ", File Path: " + filePath;
    return info;
}

/**
 * @brief Play the multimedia object.
 */
void Multimedia::play() const {
    cout << "Playing " << filePath << std::endl;
}




