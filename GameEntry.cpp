//
// Created by StudentLoaner on 9/21/2022.
//

#include "GameEntry.h"
#include <iostream>
using namespace std;

GameEntry::GameEntry(const string &n, int s) :
name(n), score(s){ }

string GameEntry::getName() const {
    return name;
}
int GameEntry::getScore() const{
    return score;
}


