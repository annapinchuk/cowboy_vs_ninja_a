// The same as team, but the transition to the characters will be according to the order of addition without distinguishing cowboys or ninjas
#pragma once
#include "Team_interface.hpp"
namespace ariel
{
    class Team2 : public Team_interface
    {
    private:
        vector<Character *> team; // vector of characters
    public:
        // Constructor that initializes the team with the given leader
        Team2(Character *leader) : Team_interface(leader){};
        ~Team2(){}; // destructor
        // attack 
        void attack(Team_interface *other){};
        // stillAlive() method that returns the number of team members who are still alive.
        int stillAlive(){};
        // print() method that prints all the team members.
        void print(){}; // pure virtual method that prints all the team members is different for each team
        // add a new member to the team
        void add(Character *c){};
    };
}
