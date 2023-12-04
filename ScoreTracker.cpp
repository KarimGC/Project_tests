#include <iostream>
#include <string>
#include <queue>

#include "Learning_Game.h"

using namespace std;

ScoreTracker::ScoreTracker() {
		username = "N/A";
	}
ScoreTracker::ScoreTracker(string userNameEnt) {
		username = userNameEnt;
	}
	void ScoreTracker::ScoreEntry(int scoreEnt) {
		if (scores.empty()) {
			scores.push(-99);
		}

		scores.push(scoreEnt);
	}

	void ScoreTracker::SetUserName(string userNameEnt) {
		username = userNameEnt;
	}

	void ScoreTracker::PrintTrackedScore() {
		cout << username << "'s scores: " << endl;
		while (!scores.empty()) {
			if (scores.front() == -99) {
				scores.pop();
			}
			else {
				cout << "Score " << cnt << ": " << scores.front() << endl;
				scores.pop();
				cnt++;
			}

		}
	}



/*int main() {

	ScoreTracker a ("bob");
	a.ScoreEntry(1);
	a.ScoreEntry(2);
	a.ScoreEntry(3);
	a.ScoreEntry(4);
	a.ScoreEntry(5);

	a.PrintTrackedScore();

	return 0;
}*/