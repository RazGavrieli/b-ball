#pragma once
#include <iostream>

class team {
    std::string name;
    double skill;
    public:
    team(std::string, double);
    double getskill() const;
    void print();

};