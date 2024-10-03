#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	string name = "John";
	cout << "Enter name: " << endl;
	cin >> name;
	float homeworkScore,testScore, quizScore, attendanceScore,finalgrade;
	homeworkScore = 89.2;
	cout << "Enter Homework score: ";
	cin >> homeworkScore;
	cout << endl;
	cout << "Enter Test score: ";
	cin >> testScore;
	cout << endl;
	cout << "Enter quiz score: ";
	cin >> quizScore;
	cout << endl;
	cout << "Enter attendance score: ";
	cin >> attendanceScore;
	cout << endl;

	finalgrade = (homeworkScore * .2) + (.5 * testScore) + (.2 * quizScore) + (.1 * attendanceScore);


	cout << "Grades for " << name << endl;

	cout << setfill(' ') << left << setw(11) << "Homework" << ":" << right << setw(4) << homeworkScore << endl;
	cout << setfill(' ') << left << setw(11) << "Test" << ":" << right << setw(4) << testScore << endl;
	cout << setfill(' ') << left << setw(11) << "Quiz" << ":" << right << setw(4) << quizScore << endl;
	cout << setfill(' ') << left << setw(11) << "Attendance" << ":" << right << setw(4) << attendanceScore << endl;
	cout << "====================" << endl;

	
	cout << setfill(' ') << left << setw(11) << "Total Score" << ":" << right << setw(4) << finalgrade << endl;



}