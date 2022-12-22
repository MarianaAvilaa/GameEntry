//
// Created by StudentLoaner on 9/21/2022.
//

#ifndef GAMEENTRY_GAMEENTRY_H
#define GAMEENTRY_GAMEENTRY_H
#include <iostream>
using namespace std;

class GameEntry {
public:
    GameEntry(const string & n= "", int s=0);
    string getName() const;
    int getScore() const;
private:
    string name;
    int score;
};


#endif //GAMEENTRY_GAMEENTRY_H
