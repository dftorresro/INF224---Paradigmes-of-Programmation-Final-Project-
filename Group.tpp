template <typename T>
Group<T>::Group(const std::string& name) : name(name) {}

template <typename T>
const std::string& Group<T>::getName() const {
    return name;
}

template <typename T>
void Group<T>::display() const {
    std::cout << "Group: " << name << std::endl;
    for (auto item : *this) {
        item->display(); // Ensure T has a display() method
    }
}
