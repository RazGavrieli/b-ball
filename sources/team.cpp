#include "team.hpp"
#include <iostream>

team::team(std::string name, double skill) {
    this->name = name;
    this->skill = skill;
}

double team::getskill() const {
    return skill;
}

void team::print() {
    std::cout << "skill: " << skill << " | name: " << name << std::endl;
}