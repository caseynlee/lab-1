/**
 * admissions.cpp
 *
 * Casey Lee
 * leecasey
 *
 * EECS 183: Lab 2
 *
 * This College Admissions Calculator will use the following variables (GPA, SAT, Demonstrated Interest, and Curriculum Strength) to measure how likely the\ prospective student will be admitted to a particular college.
 */
 
#include<iostream>
using namespace std;

const double GPA_WEIGHT = 0.4;
const double SAT_WEIGHT = 0.3;
const double DEM_INTREST_WEIGHT = 0.1;
const double CURRICULUM_STRENGTH_WEIGHT = 0.2;

int main() {
    
    //Print College Admissions Calculator
    cout << "College Admissions Calculator " << endl;
  
    //Please enter your GPA on a scale of 0.0-5.0
    cout << "Please enter your GPA out of 5.0: ";
    double GPA = 2.5;
    cin >> GPA;
    
    //Please enter your SAT score on a scale of 0-1600
    cout << "Please enter your SAT score out of 1600: ";
    int SAT = 1300;
    cin >> SAT;

    //Please enter your demonstrated interest on a scale of 0.0-10.0
    cout << "Please enter your demonstrated interest out of 10: ";
    int DEM_INTEREST = 10;
    cin >> DEM_INTEREST;
    
    //Please enter your curriculum strength on a scale of 0.0-10.0
    cout << "Please enter your high school curriculum strength out of 10: ";
    int CURRICULUM_STRENGTH = 5;
    cin >> CURRICULUM_STRENGTH;

    //Find the expected chance of admission.
    int expectedChanceofAdmission = (GPA_WEIGHT * GPA * 2 + SAT_WEIGHT * ((double)SAT / 160) + DEM_INTREST_WEIGHT * DEM_INTEREST + CURRICULUM_STRENGTH_WEIGHT * CURRICULUM_STRENGTH) * 10;
    
    //Print the score to the user.
    cout << "Expected chance of admission: " << expectedChanceofAdmission << "/100" << endl;
    
    return 0;
}
