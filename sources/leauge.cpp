#include "leauge.hpp"
#include <iostream>
#include <memory> // shared ptr
#include <iomanip> // time
const int MAXTEAMS = 20;

void leauge::fillWithRandom() {
    std::srand(std::time(nullptr));
    int i = 1;
    while (participatingTeams.size()<20) {
        double currSkill = (double)(rand()) / ((double)(RAND_MAX));
        std::shared_ptr<team> currTeam(new team(std::to_string(i), currSkill));
        participatingTeams.push_back(currTeam);
        i++;
    }
}

leauge::leauge() {
    fillWithRandom();
}

leauge::leauge(std::vector<team> teams) {
    if (teams.size()>20) {
        throw std::runtime_error("too many teams to fit into a single leauge");
    }
    for (size_t i = 0; i < teams.size(); i++)
    {
        std::shared_ptr<team> currTeam = std::make_shared<team>(teams.at(i));
        participatingTeams.push_back(currTeam);
    }
    fillWithRandom();
}

void leauge::print() {
    for (size_t i = 0; i < participatingTeams.size(); i++)
    {
        participatingTeams.at(i)->print();
    }
    

}