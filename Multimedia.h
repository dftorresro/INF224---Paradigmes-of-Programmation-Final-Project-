/**
 * @file Multimedia.h
 * @brief Class for representing multimedia objects.
 */

#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <string>
#include <iostream>

/**
 * @class Multimedia
 * @brief A class for storing multimedia object information.
 *
 */
class Multimedia {
private:
    std::string name;     ///< Name of the multimedia object.
    std::string filePath; ///< File path of the multimedia object.

public:

    /**
     * @brief Parameterized constructor.
     * @param name The name of the multimedia object.
     * @param filePath The file path of the multimedia object.
     */
    Multimedia(const std::string& name, const std::string& filePath);

    /**
     * @brief Destructor.
     */
    virtual ~Multimedia();

    /**
     * @brief Get the name of the multimedia object.
     * @return The name of the object.
     */
    std::string getName() const;

    /**
     * @brief Get the file path of the multimedia object.
     * @return The file path of the object.
     */
    std::string getFilePath() const;

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
    virtual void display() const;

    /**
     * @brief Play the multimedia object.
     */
    virtual void play() const;

};

#endif // MULTIMEDIA_H
