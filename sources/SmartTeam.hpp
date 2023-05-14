// The same for the team. The transition of the characters will be according to your choice in whatever order you see fit. 
// It is allowed and desirable at this stage to "ask" the other team 
// about the positions of their forces and their status as well as take into account the situation of the attacking team in order to maximize damage.
#pragma once
#include "Team_interface.hpp"
namespace ariel
{
    class SmartTeam : public Team_interface
    {
    private:
        vector<Character *> team; // vector of characters
    public:
        // Constructor that initializes the team with the given leader
        SmartTeam(Character *leader) : Team_interface(leader){};
        ~SmartTeam(){}; // destructor
        // attack is the most affective attack that the team can do to the other team so that the damage will be the biggest
        void attack(Team_interface *other);
        // stillAlive() method that returns the number of team members who are still alive.
        int stillAlive();
        // print() method that prints all the team members.
        void print(); 
        // add a new member to the team
        void add(Character *c);
    };
}