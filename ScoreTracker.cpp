#include <iostream>
#include <string>
#include <queue>
using namespace std;

class ScoreTracker {
public:
	ScoreTracker() {
		username = "N/A";
	}
	ScoreTracker(string userNameEnt) {
		username = userNameEnt;
	}
	void ScoreEntry(int scoreEnt) {
		if (scores.empty()) {
			scores.push(-99);
		}

		scores.push(scoreEnt);
	}

	void SetUserName(string userNameEnt) {
		username = userNameEnt;
	}

	void PrintTrackedScore() {
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

private:
	string username;
	queue<int> scores;
	int cnt = 1;
};

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