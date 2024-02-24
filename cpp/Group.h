#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <string>
#include <memory>

/**
 * @brief Represents a group of objects of type T.
 * 
 * This class is a template class that inherits from std::list<std::shared_ptr<T>>.
 * It provides functionality to manage a group of objects and perform operations on them.
 * 
 * @tparam T The type of objects in the group.
 */
template <typename T>
class Group : public std::list<std::shared_ptr<T>> {
private:
    std::string name; /**< The name of the group. */

public:
    /**
     * @brief Constructs a new Group object with the specified name.
     * 
     * @param name The name of the group.
     */
    Group(const std::string& name);

    /**
     * @brief Gets the name of the group.
     * 
     * @return const std::string& The name of the group.
     */
    const std::string& getName() const;

    /**
     * @brief Displays the contents of the group.
     * 
     * This function prints the name of the group and the objects it contains.
     */
    void display() const;
};

#include "Group.tpp"

#endif // GROUP_H