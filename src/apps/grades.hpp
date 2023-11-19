#ifndef GRADES_H
#define GRADES_H

#include <iostream>
#include <string>

class Grades{

private:
    double newGrade;
    string letterGrade;

public:
    Grades() {
        newGrade = 0;
        letterGrade = "";
    }

    void setNewGrade(double);
    void getNewGrade(double);
    void setLetterGrade(double);
    void getLetterGrade(double);

};

#endif
