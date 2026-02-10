#include "raindrops.h"
#include <string>
namespace raindrops {

// TODO: add your solution here
    std::string convert(int raindrop){
        std::string sound{};
        if(raindrop % 3 == 0)
                sound+="Pling";
        if(raindrop % 5 == 0)
                sound+="Plang";
        if(raindrop % 7 == 0)
                sound+="Plong";
        if(raindrop % 3 != 0 && raindrop % 5 != 0 && raindrop % 7 != 0)
            return std::to_string(raindrop);
        return sound;
    }
}  // namespace raindrops
