/**
 * @file Multimedia.h
 * @brief Class for representing multimedia objects.
 */

#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <string>
#include <iostream>

using namespace std; // Using the std namespace to avoid having to write "std::" before standard library types and functions.


/**
 * @class Multimedia
 * @brief A class for storing multimedia object information.
 *
 */
class Multimedia {
private:
    string name;     ///< Name of the multimedia object.
    string filePath; ///< File path of the multimedia object.

public:

    /**
     * @brief Parameterized constructor.
     * @param name The name of the multimedia object.
     * @param filePath The file path of the multimedia object.
     */
    Multimedia(const std::string& name, const std::string& filePath);

    /**
     * @brief Copy constructor.
     * @param other The multimedia object to copy.
     */
    Multimedia(const Multimedia& other);

    /**
     * @brief Destructor.
     */
    virtual ~Multimedia();

    /**
     * @brief Get the name of the multimedia object.
     * @return The name of the object.
     */
    string getName() const;

    /**
     * @brief Get the file path of the multimedia object.
     * @return The file path of the object.
     */
    string getFilePath() const;

    /**
     * @brief Set the name of the multimedia object.
     * @param name The new name of the object.
     */
    void setName(const std::string& name);

    /**
     * @brief Set the file path of the multimedia object.
     * @param filePath The new file path of the object.
     */
    void setFilePath(const std::string& filePath);

    /**
     * @brief Display the multimedia object information.
     */
    virtual std::string display() const;

    /**
     * @brief Play the multimedia object.
     */
    virtual void play() const;

};

#endif // MULTIMEDIA_H
