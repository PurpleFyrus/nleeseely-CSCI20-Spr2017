//Created by: Nick LeeSeely
//Created on: February 16th 2017

//The following program is to show the use of structs outputting 2 different kinds of results using the same struct template

#include <iostream>
#include <string>
using namespace std;

struct monsterStruct {
    
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
};

int main() {
    
    monsterStruct oneMonster;
    
    oneMonster.name = "OneMonster";
    oneMonster.head = "Zombus";
    oneMonster.eyes = "Spritem";
    oneMonster.ears = "Vegitas";
    oneMonster.nose = "None";
    oneMonster.mouth = "Wackus";
    
    monsterStruct twoMonster;
    
    twoMonster.name = "TwoMonster";
    twoMonster.head = "Spritem";
    twoMonster.eyes = "Vegitas";
    twoMonster.ears = "Wackus";
    twoMonster.nose = "Zombus";
    twoMonster.mouth = "None";
    
    cout << "The Following are two monsters and their respective body parts" << endl;
    cout << "in the order of Name: Head, Eyes, Ears, Nose, and Mouth." << endl;
    cout << endl;
    
    cout << oneMonster.name << ": ";
    cout << oneMonster.head << ", ";
    cout << oneMonster.eyes << ", ";
    cout << oneMonster.ears << ", ";
    cout << oneMonster.nose << ", ";
    cout << oneMonster.mouth << endl;
    
    cout << twoMonster.name << ": ";
    cout << twoMonster.head << ", ";
    cout << twoMonster.eyes << ", ";
    cout << twoMonster.ears << ", ";
    cout << twoMonster.nose << ", ";
    cout << twoMonster.mouth << endl;
    
}