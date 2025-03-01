#include<iostream>
#include<string>

using namespace std;

class Movie_Session {
private:
	string name;
	string time;
	string date;
	int cost;
public:
	Movie_Session() : name(""), time(""), date(""), cost(0) {};
	Movie_Session(string n) : Movie_Session(n, "","", 0) {};
	Movie_Session(string n, string t) : Movie_Session(n, t, "",0) {};
	Movie_Session(string n, string t, string d) : Movie_Session(n,t, d, 0) {};
	Movie_Session(string n, string t, string d, int c) :name(n), time(t), date(d), cost(c) {};

	void film_info() {
		cout << "Name: " << name << ", Time: " << time << ", Date: " << date << ", Cost: " << cost << "grn" << endl;
	}

	~Movie_Session() {
		cout << "The session for this date has been canceled " << date << endl;
	}

};


int main() {
	Movie_Session test("Fight Club", "21:00", "29.02.2025", 50);
	test.film_info();
}