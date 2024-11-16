#include <bits/stdc++.h>
#include "json.hpp" // Download and include https://github.com/nlohmann/json

using namespace std;
using json = nlohmann::json;

class Person {
    json j; // Declare JSON object

public:
    // Method to convert data to JSON
    void insertData() {
        string name; // Temporary variable to store input
        cout << "Enter your name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        getline(cin, name); // Use getline to read the name
        j["name"] = name; // Assign to JSON object

        cout << "Enter your ID: ";
        cin >> j["ID"];
        cout << "Enter your birth date: ";
        cin >> j["DD"];
        cout << "Enter your birth month: ";
        cin >> j["MM"];
        cout << "Enter your birth year: ";
        cin >> j["yyyy"];
        cout << "Enter your mobile number: ";
        cin >> j["number"];
        cout << "Enter your password: ";
        cin >> j["password"];
    }

    // Method to return JSON object
    json getData() const {
        return j;
    }
};

int main() {
    cout << "\t**********  Ahsanullah Institute of Information and Communication Technology  **********\n";

    // Creating a Person object and inserting data
    Person p;
    p.insertData();

    // Printing JSON data
    json j = p.getData();
    cout << "\nJSON Representation:\n" << j.dump(4) << endl; // Pretty print with 4 spaces

    return 0;
}
