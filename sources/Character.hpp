#pragma once
#include <string>
#include "Point.hpp"
using namespace std;
namespace ariel
{
    class Character
    {
    private:
        string name;
        Point location;
        int hit_points;

    public:
        // Constructor that initializes the Character object with the given name, location and hit_points
        Character(string name, Point location, int hit_points) : name(name), location(location), hit_points(hit_points){};
        // getters and setters
        string getName(){return this->name;};
        Point getLocation(){return this->location;};
        int getHealthpoints(){return 0;};
        void setName(string name){};
        void setLocation(Point location){};
        void setHealthpoints(int hit_points){};
        bool isAlive(){return 0;};                // returns true if the character is alive, false otherwise more than 0 hit_points
        double distance(Character *c){return 0;}; // calculate the distance between two characters
        virtual string print() = 0;                  // prints the name of the character, the hp, and the point where the character is. If the character dies the hp will not be printed, and the character's name will appear in parentheses.
        // Before the name will appear a letter indicating the type of character: N for ninja and C for cowboy.
        void hit(int damage){}; // reduce the hit_points of the character by the given damage
    };
}