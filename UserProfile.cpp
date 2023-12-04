// UserProfile.cpp
#include "Learning_Game.h"

UserProfile::UserProfile() : language(0), score(0) {}

UserProfile::UserProfile(const std::string& name, int score) {
    this->name = name;
    this->score = score;
}

const std::string& UserProfile::getName() const {
    return name;
}

bool UserProfile::getLanguage() {
    return language;
}

int UserProfile::getScore() {
    return score;
}

void UserProfile::setName(const std::string& name) {
    this->name = name;
}

void UserProfile::setLanguage(bool lan) {
    language = lan;
}

void UserProfile::setScore(int score) {
    this->score = score;
}