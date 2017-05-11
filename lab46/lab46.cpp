//created by: nick ls
//created on: 5-6-2017

//the following program is designed to use a source file full of values in the order of: 
//student's name, # semester the following grades are from, then the grades in the format of 
//unit then grade per line, then the total units before this semester and finally the current gpa before this semester
//then it calculates the semester GPA and then calculate the new GPA, then output all the info into an html file

#include <iostream>
#include <fstream>          //used to define stream objects to direct the flow of data in and out of this program
#include <string>           //used to allow string data type variables
#include <cstring> 
#include <cctype>  
#include <cstdlib> 
#include <iomanip>
using namespace std;

int main() {
    
    ifstream inFS;          //new object "inFS" so I can import data from the source file into the program
    ofstream outFS;         //new object "outFS" so I can export data into the output file from the program
    
    string studentName;         //where the student's name will be stored
    int semester;               //where the semester is stored, honestly probably not necessary, but I put it in for formalities
    int classUnits[10];         //array used to store units from each class
    string classGrades[10];     //array used to store class grades (parallel to classUnits)
    int totalUnits;             //integer used to store total amount of units for later GPA calculation use
    double currentGPA;          //double used to store current GPA
    int gradePoints = 0;        //integer used to store grade points in
    int unitPoints = 0;         //integer used to store unit points in
    double semesterGPA;         //double used to store current semester GPA in
    double newGPA;              //double used to store new GPA in
    int numClassesTaken;        //integer used to store number of classes taken (for loop iteration purposes)
    
    int temp1;                  //integer for temporary use in storing units values
    string temp2;               //string used to store grades and finally GPA in (converted to a double once GPA is entered)
    int tempBreak = 0;          //integer used to break the loop later on once GPA is entered (after grades)
    
    inFS.open("sourcefile.txt");                                                //opens the source file with student's data
    if (!inFS.is_open()) {                                                      //ensures the source file opened
        cout << "Could not open file sourcefile.txt" << endl;                   //lets user know source file didn't open
        return 1; // 1 indicates error 
    }
    
    cout << "Reading Student Name." << endl;                                    //lets user know it's reading student name
    getline(inFS, studentName);                                                 //gets user name from source file and stores it in variable: studentName
    inFS.clear();                                                               //clears the cache? float? main purpose is to separate from other variable input
    
    cout << "Reading Current Semester Number" << endl;                          //lets user know current semseter is being read
    inFS >> semester;                                                           //reads current semester from source file
    
    cout << "Reading Semester Units and Grades" << endl;                        //lets user know now the grades & units are being read in
    
    for (int i = 0; tempBreak!= 1; i++) {                                       //loop to begin the reading of units, grades, & GPA
        inFS >> temp1;                                                          //start of loop either a class' unit value is taken in, or overall taken units
        inFS >> temp2;                                                          //start of loop either class grade (A-F) or GPA is taken in
            
            if (temp2 == "A") {                                                 //the following multi decision paths are to compare string "temp2" to 
                classGrades[i] = 'A';                                           //A, B, C, D, or F and then add the according Grade points to the overall
                classUnits[i] = temp1;                                          //Grade point count, and also the according unit points as well
                gradePoints = gradePoints + (4 * temp1);
                unitPoints = unitPoints + temp1;
            }
            else if (temp2 == "B") {
                classGrades[i] = 'B';
                classUnits[i] = temp1;
                gradePoints = gradePoints + (3 * temp1);
                unitPoints = unitPoints + temp1;
            }
            else if (temp2 == "C") {
                classGrades[i] = 'C';
                classUnits[i] = temp1;
                gradePoints = gradePoints + (2 * temp1);
                unitPoints = unitPoints + temp1;
            }
            else if (temp2 == "D") {
                classGrades[i] = 'D';
                classUnits[i] = temp1;
                gradePoints = gradePoints + (1 * temp1);
                unitPoints = unitPoints + temp1;
            }
            else if (temp2 == "F") {
                classGrades[i] = 'F';
                classUnits[i] = temp1;
                unitPoints = unitPoints + temp1;
            }
            else {                                                              //however, if no Grade Letter is taken in, it must be the GPA
                totalUnits = temp1;                                             //so the first variable "temp1" is totalUnits and is assigned as such
                currentGPA = atof(temp2.c_str());                               //and the GPA value is stored in a string, so needs to be changed to a double
                numClassesTaken = i;                                            //and stored in currentGPA (a double variable)
                tempBreak = 1;                                                  //and finally tempBreak is assigned 1 to break the loop
            }
    }
    
    inFS.close();                                                               //the source file is then closed (good practice)
    
    //calculate semester GPA and new overall GPA
    
    cout << fixed;                                                              //setting the format for following output
    cout << setprecision(1);                                                    //setting proceeding floats to be 1 postion past decimal point
    
    double semesterGPAFloat = (gradePoints % unitPoints);                       //semester GPA float is determined by performing mod unitPoints of gradePoints
    semesterGPAFloat = semesterGPAFloat / unitPoints;                           //and then dividing by unitPoints
    semesterGPA = (gradePoints / unitPoints) + semesterGPAFloat;                //semester GPA is found by adding that float to (gradepoints divided by unitpoints)
    
    if (currentGPA != 0.0) {                                                    //if the current GPA is not 0.0 then
        newGPA = (currentGPA + semesterGPA) / 2;                                //new GPA is determined by adding old GPA and New GPA, then dividing by 2
    }
    else {
        newGPA = semesterGPA;                                                   //however, if current GPA is 0.0 (i.e. no GPA) then its just New GPA
    }
    
        outFS.open("outputfile.html");                                          //opens the output html file stream
    if (!outFS.is_open()) {                                                     //insures the output file is open
        cout << "Could not open file outputfile.html" << endl;
        return 1;                                                               // 1 indicates error
    }
    
    outFS << "Student Name: " << studentName << endl;                           //outputs student name to HTML file
    outFS << "Semester Number: " << semester << endl;                           //outputs semester number to HTML file
    outFS << "Class Grades for all " << numClassesTaken << " classes" << endl;  //outputs header for proceeding grades (and number of classes) to HTML file
    
    for (int i = 0; i < numClassesTaken; i++) {                                 //loops through all class units and grades and outputs them to HTML file
        outFS << classUnits[i] << " " << classGrades[i] << endl;
    }
    
    outFS << totalUnits << " " << currentGPA << endl;                           //outputs total units and GPA before semester
    
    outFS << "Grade Points for this semester: " << gradePoints << endl;         //outputs total grade points for semester being processed
    outFS << "Unit Points for this semester: " << unitPoints << endl;           //outputs the total unit points for semester being processed
    outFS << "This Semester GPA: " << setprecision(2) << semesterGPA << endl;   //outputs the GPA for the semseter being processed
    outFS << "New Overall GPA: " << setprecision(2) << newGPA << endl;          //outputs the new GPA with the current semester's GPA added
    
    outFS.close();                                                              //closes the HTML file 
    
    return 0;
}