#include <iostream>

using namespace std;

int main()
{
    cout << "Input your score: \n";
    int score;
    cin >> score;
    if (score == 100) {
        cout << "You achieved a perfect score! \n";
    }
    else if (score >= 90){
        cout << "You got an A. \n";
    }
    else if (score >=80) {
        cout << "You got a B. \n";
    }
    else if (score >= 70) {
        cout << "You got a C. \n";
    }
    else if (score >= 60) {
        cout << "You got a D. \n";
    }
    else if (score <= 50) {
        cout << "You got an F. Bummer. \n";
    }

    return 0;
}
