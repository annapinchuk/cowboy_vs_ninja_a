#pragma once
#include "Character.hpp"
#include "Team_interface.hpp"
namespace ariel
{
    // This class is a group of up to ten fighters, where a fighter can be a ninja or a warrior.
    // Each group is assigned a leader who is one of the fighters. When a group is created, it gets a leader pointer.
    // Going over all members of the group (for attacking, printing, or comparing) will always be done in the following order:
    // first go over all the cowboys, then go over all the ninjas.
    // Within each group, the transition will be made according to the order in which the characters were added.
    // When searching for the closest character, and two characters are at the same distance, the first character that was checked between them will be selected.
    class Team : public Team_interface
    {
    private:
        // vector of characters , first the cowboys and then the ninjas, in the order in which they were added to the group
        // the number of characters in both groups combined will not exceed 10
        vector<Cowboy *> Cowboys; 
        vector<Ninja *> Ninjas;  
    public:
        // Constructor that initializes the Team object with the given leader and 2 empty vectors of cowboys and ninjas and add the leader to the matching group
        Team(Character *leader) : Team_interface(leader), Cowboys(), Ninjas(){}
        // destructor frees the memory allocated to all members of the group
        ~Team(){}
        // Adding add() takes a pointer to a cowboy or ninja, and adds it to the matching group.
        void add(Character *c){}
        // attack() receives a pointer to an enemy group.
        // Attacking the enemy group will be done in the following way:
        // First check if the leader of the attacking group is alive.
        // Otherwise, a new leader must be chosen, who is the living character closest (in terms of location) to the dead leader.
        // Then the group will choose a victim from among the enemy group.
        // The victim is the member of the living enemy group who is closest to the leader of the attacking group.
        // All living members of the attacking group will attack the chosen victim.
        // Cowboys who have bullets in their guns will shoot the victim, and cowboys who don't have bullets will load their weapons.
        // Ninjas within 1 meter of the victim will kill the victim, and ninjas further away will advance towards the victim.
        // At each stage, if the victim is dead, a new victim will be chosen (which will be, again, the living enemy character closest to the leader of the attacking group).
        // If there are no living members in the attacking group or the enemy group the attack will end
        void attack(Team *enemy){}
        // stillAlive() returns an integer number of group members remaining alive.
        int stillAlive(){return 0;}
        // print() goes through all the characters in the group and prints their details
        void print(){}
    };
}