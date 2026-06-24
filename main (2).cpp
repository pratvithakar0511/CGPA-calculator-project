/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, numSubjects;
    float grade, creditHours;

    float totalGradePoints = 0;
    float totalCredits = 0;
    float cgpa;

    cout << "==========================================" << endl;
    cout << "         CGPA CALCULATOR SYSTEM           " << endl;
    cout << "==========================================" << endl;

    cout << "\nEnter Total Number of Subjects : ";
    cin >> numSubjects;

    string subjectName[numSubjects];
    float grades[numSubjects];
    float credits[numSubjects];

    for (i = 0; i < numSubjects; i++)
    {
        cout << "\n------------------------------------------" << endl;
        cout << "Enter Details of Subject " << i + 1 << endl;
        cout << "------------------------------------------" << endl;

        cout << "Enter Subject Name : ";
        cin >> ws;
        getline(cin, subjectName[i]);

        cout << "Enter Grade (Out of 10) : ";
        cin >> grades[i];

        cout << "Enter Credit Hours : ";
        cin >> credits[i];

        totalGradePoints = totalGradePoints + (grades[i] * credits[i]);

        totalCredits = totalCredits + credits[i];
    }

    cgpa = totalGradePoints / totalCredits;

    cout << "\n\n==========================================" << endl;
    cout << "              RESULT SECTION              " << endl;
    cout << "==========================================" << endl;

    cout << left << setw(25) << "Subject Name"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    cout << "--------------------------------------------------------" << endl;

    for (i = 0; i < numSubjects; i++)
    {
        cout << left << setw(25) << subjectName[i]
             << setw(15) << grades[i]
             << setw(15) << credits[i] << endl;
    }

    cout << "--------------------------------------------------------" << endl;

    cout << fixed << setprecision(2);

    cout << "\nTotal Credits       : " << totalCredits << endl;
    cout << "Total Grade Points  : " << totalGradePoints << endl;
    cout << "Final CGPA          : " << cgpa << endl;

    if (cgpa >= 9)
    {
        cout << "Performance         : Excellent" << endl;
    }
    else if (cgpa >= 8)
    {
        cout << "Performance         : Very Good" << endl;
    }
    else if (cgpa >= 7)
    {
        cout << "Performance         : Good" << endl;
    }
    else if (cgpa >= 6)
    {
        cout << "Performance         : Average" << endl;
    }
    else
    {
        cout << "Performance         : Needs Improvement" << endl;
    }

    cout << "\n==========================================" << endl;
    cout << "   Thank You For Using CGPA Calculator!   " << endl;
    cout << "==========================================" << endl;

    return 0;
}