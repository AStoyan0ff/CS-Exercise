#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int time1, time2, time3; // 44 50 45
	cin >> time1 >> time2 >> time3;

	int totalTime = time1 + time2 + time3; //124 sec 2:04

	int minutes = totalTime / 60; // 124: 60 =2:00 
	int seconds = totalTime % 60; // 4

	cout << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

}


