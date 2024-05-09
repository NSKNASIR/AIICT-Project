#include <bits/stdc++.h>
#include <fstream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main(){
    ofstream ecefile("ece.json");
    json ecedata;
    ecedata = json::parse(R"(
  {
    "pi": 3.141,
    "happy": true
  }
)");
    ecefile<<ecedata;
}