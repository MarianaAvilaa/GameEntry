//
// Created by StudentLoaner on 9/21/2022.
//

#ifndef GAMEENTRY_SCORES_H
#define GAMEENTRY_SCORES_H
#include <iostream>
using namespace std;

#include "GameEntry.h"
#include "IndexOutOfBounds.h"
#include "RuntimeException.h"
class Scores {
public:
Scores(int maxEnt=10);
~Scores();
void add(const GameEntry& e);
void print();
GameEntry remove(int i)
throw (IndexOutOfBounds);
private:
    int maxEntries;
    int numEntries;
    GameEntry* entries;


};


#endif //GAMEENTRY_SCORES_H
