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
    Movie_Session(string n) : Movie_Session(n, "", "", 0) {};
    Movie_Session(string n, string t) : Movie_Session(n, t, "", 0) {};
    Movie_Session(string n, string t, string d) : Movie_Session(n, t, d, 0) {};
    Movie_Session(string n, string t, string d, int c) :name(n), time(t), date(d), cost(c) {};

    void film_info() {
        cout << "Name: " << name << ", Time: " << time << ", Date: " << date << ", Cost: " << cost << "grn" << endl;
    }

    ~Movie_Session() {
        cout << "The session for this date has been canceled " << date << endl;
    }

};

class Reserve_Tickets {
private:
    string nameClient;
    string nameMovie;
    string dateMovie;
    string timeMovie;
    int numberRow;
    int numberSit;
public:
    Reserve_Tickets() : nameClient(""), nameMovie(""), dateMovie(""), timeMovie(""), numberRow(0), numberSit(0) {};\
        Reserve_Tickets(string nC) : Reserve_Tickets(nC, "", "", "", 0, 0) {};
    Reserve_Tickets(string nC, string m) : Reserve_Tickets(nC, m, "", "", 0, 0) {};
    Reserve_Tickets(string nC, string m, string d) : Reserve_Tickets(nC, m, d, "", 0, 0) {};
    Reserve_Tickets(string nC, string m, string d, string nM) : Reserve_Tickets(nC, m, d, nM, 0, 0) {};
    Reserve_Tickets(string nC, string m, string d, string nM, int R) : Reserve_Tickets(nC, m, d, nM, R, 0) {};
    Reserve_Tickets(string nC, string m, string d, string nM, int R, int S) : nameClient(nC), nameMovie(m), dateMovie(d), timeMovie(nM), numberRow(R), numberSit(S) {};

    void info_about_reserve() {
        cout << "Your name: " << nameClient << "." << endl;
        cout << "Movie: " << nameMovie << "." << endl;
        cout << "Reserve on: " << dateMovie << " " << "Time: " << timeMovie << "." << endl;
        cout << "Your place: " << "Row: " << numberRow << " " << "Sit: " << numberSit << "." << endl;
    }

    ~Reserve_Tickets() {
        cout << "Done! You reserve was deleted." << endl;
    }

};


int main() {
    Movie_Session test("Fight Club", "21:00", "29.02.2025", 50);
    test.film_info();

    cout << endl;

    Reserve_Tickets test2("Vanya'", "Fight club", "29.02.2025", "21:00", 5, 17);
    test2.info_about_reserve();

    cout  << endl;
   
}