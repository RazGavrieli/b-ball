#include <vector>
#include "team.hpp"
#include <iostream>
#include <memory>

class leauge {
    std::vector<std::shared_ptr<team>> participatingTeams;

    void fillWithRandom();
public:
    leauge();
    leauge(std::vector<team>);
    void print();
};