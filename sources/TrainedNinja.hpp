#pragma once
#include "Ninja.hpp"
// instance of Ninja successor class
namespace ariel
{
    class TrainedNinja : public Ninja
    {
    public:
        // Constructor that initializes the TrainedNinja object with the given name, location , hit_points and speed ,TrainedNinja move at speed 12. Generated with 120 hit points
        TrainedNinja(string name, Point location) : Ninja(name, location, 120, 12){};
    };
}