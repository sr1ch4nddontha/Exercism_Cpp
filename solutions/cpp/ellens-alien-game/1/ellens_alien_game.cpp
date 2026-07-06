namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
public:
    int x_coordinate;
    int y_coordinate;
private:
    int health{3};    
public:
    Alien(int x, int y){
        this->x_coordinate = x;
        this->y_coordinate  = y;
    }

    int get_health(){
        return this->health;
    }

    bool hit(){
        if(health > 0)
            health--;
        return true;
    }

    bool is_alive(){
        return (this->health >0);
    }

    bool teleport(int x_new, int y_new){
        this->x_coordinate = x_new;
        this->y_coordinate  = y_new;
        return true;
    }

    bool collision_detection(Alien enemy){
        return (x_coordinate == enemy.x_coordinate) && (y_coordinate == enemy.y_coordinate);
    }
};
}  // namespace targets
