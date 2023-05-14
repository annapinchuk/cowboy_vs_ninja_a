#pragma once
#include "Ninja.hpp"
// instance of Ninja successor class
namespace ariel
{
    class YoungNinja : public Ninja
    {
    public:
        // Constructor that initializes the YoungNinja object with the given name, location , hit_points and speed ,YoungNinja move at speed 14. Generated with 100 hp
        YoungNinja(string name, Point location) : Ninja(name, location, 100, 14){};
    };
}