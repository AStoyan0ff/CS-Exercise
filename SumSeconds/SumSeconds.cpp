#include <iostream>
using namespace std;

int main() {

    int time1, time2, time3;
    cin >> time1 >> time2 >> time3;

    int totalTime = time1 + time2 + time3;

    int minutes = totalTime / 60;
    int seconds = totalTime % 60;

    if (seconds < 10) {
        cout << minutes << ":0" << seconds << '\n';

    }
    else
    {
        cout << minutes << ":" << seconds << '\n';

    }

}