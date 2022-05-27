#include <leauge.hpp>


int main() {

    team testTeam1("a", 0.03);
    team testTeam2("b", 0.13);
    team testTeam3("c", 0.33);

    std::vector<team> testVec;
    testVec.push_back(testTeam1);
    testVec.push_back(testTeam2);
    testVec.push_back(testTeam3);
    leauge leauge(testVec);
    leauge.print();

}