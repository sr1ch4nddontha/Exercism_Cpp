#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if(kind != "car" && kind != "truck")
        return false;
    
    return true;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string option{};
    if(option1 < option2)
        option = option1;
    else 
        option = option2;
    return option + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double final_price{0};
    if (age < 3)
        final_price = original_price - ((original_price * 20.0) / 100.0);
    if (age >= 10)
        final_price = original_price - ((original_price * 50.0) / 100.0);
    if (age >= 3 && age < 10)
        final_price = original_price - ((original_price * 30.0) / 100.0);
    return final_price;
}

}  // namespace vehicle_purchase

    