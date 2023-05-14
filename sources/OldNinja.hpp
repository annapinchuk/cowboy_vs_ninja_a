#pragma once
#include "Ninja.hpp"
// instance of Ninja successor class
namespace ariel
{
    class OldNinja : public Ninja
    {
    public:
        // Constructor that initializes the OldNinja object with the given name, location , hit_points and speed ,OldNinja move at speed 8. Spawn with 150 hit points
        OldNinja(string name, Point location) : Ninja(name, location, 150, 8){};
    };
}