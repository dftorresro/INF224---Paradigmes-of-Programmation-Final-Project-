#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <string>
#include <memory>

template <typename T>
class Group : public std::list<std::shared_ptr<T>> {
private:
    std::string name;

public:
    Group(const std::string& name);

    const std::string& getName() const;

    void display() const;
};

#include "Group.tpp"

#endif // GROUP_H
