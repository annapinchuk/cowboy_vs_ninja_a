#pragma once
// the header files inclides Character.hpp and Ninja.hpp
#include "Cowboy.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include <vector>
using namespace std;
namespace ariel
{
    class Team_interface
    {
    private:
        Character *leader; // the leader of the team
    public:
        // Constructor that initializes the team with the given leader
        Team_interface(Character *leader) : leader(leader){};
        ~Team_interface(){}; // destructor
        virtual void attack(Team_interface *other){}; // attack method that attacks the other team is different for each team
        // stillAlive() method that returns the number of team members who are still alive.
        virtual int stillAlive(){return 0;};
        // print() method that prints all the team members.
        virtual void print(){}; // pure virtual method that prints all the team members is different for each team
        // add a new member to the team is different for each team
        virtual void add(Character *c){};
    };
}