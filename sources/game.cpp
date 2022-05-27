#include "game.hpp"
#include <iomanip> // time

const int MAXSCORE = 100;
const int MINHOMESCORE = 55;
const int MINAWAYSCORE = 50;

game::game(team& home, team& away) {
    this->home = &home;
    this->away = &away;

    std::srand(std::time(nullptr));
    this->homeScore =  MINHOMESCORE + (double)(rand()) / ((double)(RAND_MAX/(MAXSCORE - MINHOMESCORE)));
    this->awayScore =  MINAWAYSCORE + (double)(rand()) / ((double)(RAND_MAX/(MAXSCORE - MINAWAYSCORE)));
    if (this->home->getskill()>this->away->getskill()) {
        this->homeScore+=10;
    } else if (this->home->getskill()<this->away->getskill()) {
        this->awayScore+=10;
    }
    
    if (homeScore>awayScore) {
        homeWon = true;
    } else if (homeScore<awayScore) {
        homeWon = false;
    } else {
        // tied, calculate random number between 0 and 100. away wins if >50 else home wins
        double randNum =  (double)(rand()) / ((double)(RAND_MAX/(MAXSCORE)));
        if (randNum>50) {
            homeWon = false;
        } else {
            homeWon = true;
        }
    }
}
