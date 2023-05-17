#include "doctest.h"
#include "sources/Character.hpp"
#include "sources/OldNinja.hpp"
#include "sources/YoungNinja.hpp"
#include "sources/TrainedNinja.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Team.hpp"
#include "sources/Team2.hpp"
#include <random>
#include <chrono>
#include <iostream>

using namespace ariel;
using namespace std;

TEST_CASE("Ninja tests") {
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    Ninja n1("Ninja 1", p1, 100, 14);
    Ninja n2("Ninja 2", p2, 120, 12);

    double dist = n1.distance(&n2);
    CHECK(dist == 5.0);

    CHECK(n1.getName() == "Ninja 1");
    CHECK(n2.getName() == "Ninja 2");

    CHECK(n1.getLocation().getX() == 0.0);
    CHECK(n1.getLocation().getY() == 0.0);
    CHECK(n2.getLocation().getX() == 3.0);
    CHECK(n2.getLocation().getY() == 4.0);

    n1.move(&n2);
    CHECK(n1.getLocation().getX() == 3.0);
    CHECK(n1.getLocation().getY() == 4.0);

    n1.slash(&n2);
    CHECK(n2.getHealthpoints() == 110);
}

TEST_CASE("Team tests") {
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    Ninja n1("Ninja 1", p1, 100, 14);
    Ninja n2("Ninja 2", p2, 120, 12);
    Team team1(&n1);
    Team team2(&n2);

    team1.add(&n2);
    team1.attack(&team2);

    CHECK(n1.getHealthpoints() == 100);
    CHECK(n2.getHealthpoints() == 110);
}
TEST_CASE("Cowboy tests") {
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    Cowboy c1("Cowboy 1", p1);
    Cowboy c2("Cowboy 2", p2);

    double dist = c1.distance(&c2);
    CHECK(dist == 5.0);

    CHECK(c1.getName() == "Cowboy 1");
    CHECK(c2.getName() == "Cowboy 2");

    CHECK(c1.getLocation().getX() == 0.0);
    CHECK(c1.getLocation().getY() == 0.0);
    CHECK(c2.getLocation().getX() == 3.0);
    CHECK(c2.getLocation().getY() == 4.0);

    c1.shoot(&c2);
    CHECK(c1.getLocation().getX() == 3.0);
    CHECK(c1.getLocation().getY()== 4.0);

    c1.shoot(&c2);
    CHECK(c2.getHealthpoints() == 110);
}
TEST_CASE("Team2 tests"){
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    Cowboy c1("Cowboy 1", p1);
    Cowboy c2("Cowboy 2", p2);
    // add also ninja
    YoungNinja n1("Ninja 1", p1);
    OldNinja n2("Ninja 2", p2);
    Team2 team1(&c1);
    Team2 team2(&c2);

    team1.add(&c2);
    team1.add(&n1);
    team1.add(&n2);
    team1.attack(&team2);

    
    CHECK(c1.getHealthpoints() == 100);
    CHECK(c2.getHealthpoints() == 110);
}
