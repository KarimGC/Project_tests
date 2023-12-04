
#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <string>
#include <queue>
#include <iostream>

using namespace std;

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

#endif