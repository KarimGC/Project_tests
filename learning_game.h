#ifndef LEARNING_GAME_H
#define LEARNING_GAME_H

#include <string>
#include <queue>
#include <iostream>
#include <locale>

using namespace std;

class Translation : private ScoreTracker {
public:
    void display(bool language);
    int playTranslation();
};

class Fill : private ScoreTracker {

public:
    void display(bool language);
    int playTranslation();
};

class UserProfile {
public:
    UserProfile();
    UserProfile(const std::string& name, int score);

    const std::string& getName() const;
    bool getLanguage();
    int getScore();
    void setName(const std::string& name);
    void setLanguage(bool lan);
    void setScore(int score);


private:
    std::string name;
    bool language;
    int score;
};

class ScoreTracker : private UserProfile{
public:
    ScoreTracker();

    ScoreTracker(string userNameEnt);

    void ScoreEntry(int scoreEnt);

    void SetUserName(string userNameEnt);

    void PrintTrackedScore();

private:
    string username;
    queue<int> scores;
    int cnt = 1;
};


#endif