#include "Player.h"

void Player::setID(int newID){
    if(newID >= 0)
        userID = newID;
}
void Player::setPoints(int newPoints){
    if(newPoints >= 0)
        points = newPoints;
}
void Player::addPoints(int newPoints){
    if(newPoints >= 0)
        points += newPoints;
}
int Player::getID(){
    return userID;
}
int Player::getPoints(){
    return points;
}
