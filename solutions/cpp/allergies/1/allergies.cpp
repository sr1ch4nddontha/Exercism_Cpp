#include "allergies.h"

#include <unordered_map>

namespace allergies {

const std::unordered_map<std::string, unsigned int> allergy_map = {
    {"eggs", 1},
    {"peanuts", 2},
    {"shellfish", 4},
    {"strawberries", 8},
    {"tomatoes", 16},
    {"chocolate", 32},
    {"pollen", 64},
    {"cats", 128}
};

allergy_test::allergy_test(unsigned int score) {
    this->score = score & 255;   // Ignore values above 128
}

bool allergy_test::is_allergic_to(const std::string& allergen) const {
    auto it = allergy_map.find(allergen);

    if (it == allergy_map.end()) {
        return false;
    }

    return (score & it->second) != 0;
}

std::unordered_set<std::string> allergy_test::get_allergies() const {
    std::unordered_set<std::string> result;

    for (const auto& allergy : allergy_map) {
        if ((score & allergy.second) != 0) {
            result.emplace(allergy.first);
        }
    }

    return result;
}

}  // namespace allergies