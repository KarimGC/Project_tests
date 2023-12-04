// Learning

#ifndef SCORE_TRACKER_H
#define SCORE_TRACKER_H

#include <string>
#include <queue>
#include <iostream>

using namespace std;

class ScoreTracker {
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