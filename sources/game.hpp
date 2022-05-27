#include "team.hpp"

class game {

    team* home;
    team* away;
    bool homeWon; // true for home, false for away
    int homeScore;
    int awayScore;

    game(team&, team& );
    void getWinner() const;

};