#include <bits/stdc++.h>
#include <fstream>
#include "json.hpp" //install https://github.com/nlohmann/json

using namespace std;
using json = nlohmann::json;

class Person{
    string name;
    int ID;
    int dd,mm,yyyy;
    unsigned int number;
    char password[20];
    public:
    void insertData(){
        cout<<"Enter your name: ";cin>>name;
        cout<<"Enter your ID: ";cin>>ID;
        cout<<"Enter your birth date :";cin>>dd;
        cout<<"Enter your birth month : ";cin>>mm;
        cout<<"Enter your birth year : ";cin>>yyyy;
        cout<<"Enter your mobile number: ";cin>>number;
        cout<<"Enter your password: ";cin>>password;
    }
    void showData(){
        
    }
    
};


int main() {
    cout<<"\t**********  Ahsanullah Institute of Information and Communication Technology  **********\n";
    //main code is here
    Person p;
    
    
    return 0;
}