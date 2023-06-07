// Holds a value with int type id_x and id_y as the key
#include <iostream>
#include <unordered_map>

// Create a type that combines id_x and id_y as the key
struct LCKey {
    int id_x;
    int id_y;
};

// Define the hash function for the Key type
struct LCKeyHash {
    std::size_t operator()(const LCKey& key) const {
        return std::hash<int>()(key.id_x) ^ std::hash<int>()(key.id_y);
    }
};

// Define the comparison operator for the Key type
struct LCKeyEqual {
    bool operator()(const LCKey& lhs, const LCKey& rhs) const {
        return lhs.id_x == rhs.id_x && lhs.id_y == rhs.id_y;
    }
};
