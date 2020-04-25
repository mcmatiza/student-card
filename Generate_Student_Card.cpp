// compile a student academic report for a high school learner in grade 12 (matric).
// learner is enrolled for 6 study units (subjects), namely: 
// English, Mathematics, Life Orientation, History, Computer literacy, Geography.
// earner has to pass at least four subjects, including English, to complete grade 12.
// The subject pass mark is 50%.

// Program functions
// 1. program that prompts the learner to key in their marks for each subject
// 2. include the following functions:
// - studentDetails, that prompts the learner to key in their personal details name,surname, and schoolName.
// - getMarks, that prompts the learner to key in a mark for each of the six subjects, and
// - validate the marks. 
// - Do not accept marks lower than 0 or higher than 100.
// 3 calcAverageYearMark, to calculate and display the average of the 6 Subjects
// - calcAverageYearMark function should be called just once by main, and should be passed the 6 Subject marks
// 4. minMax, to find and return the lowest and the highest of the 6 subject marks passed to it as the subject with the lowest mark;
// 5. passOrFail, to determine whether the student has passed or failed grade 12
// 6. awardDistinction to determine which of the subjects have received distinctions
// - A subject receives a distinction if the mark is 75% and above
// - Also a student has passed with distinction if the average mark is 75% and above
// 7. codeSymbol, to convert each mark to a symbol (A, B, C, D, E, F) and a code (7,6,5,4,3,2,1).
// 8. The symbol and code should be printed next to the mark in the student report.
// - The same should be calculated and displayed for the average mark. 
// 9. A function to Display the student report.

// CODE SYMBOL MARK
// 7 A 80 - 100%
// 6 B 70 - 79%
// 5 C 60 - 69%
// 4 D 50 - 59%
// 3 E 40 - 49%
// 2 F 30 - 39%
// 1 FF 0 - 29%
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string stuname, stusurname, school;
const int NumSubjects = 6;
const int passmark = 50;
const int distMark = 75;
float stumarks, totalMarks, average;
char gradeLang;
int codeLang;
float English, Mathematics, LifeOrientation, History, Computerliteracy, Geography;

void getStudentDetails()
{
	cout << "**** STUDENT ACADEMIC RECORD ****" << endl;
	cout << "This program inputs the learner marks of matric" << endl;;
	cout << "level subjects and prints the student final report" << endl;
	cout << "************************************************* " << endl;
	cout << "Enter student First Name:" << endl;
	getline(cin, stuname, '\n');

	cout << "Enter student Surname:" << endl;
	getline(cin, stusurname, '\n');

	cout << "Enter student School Name" << endl;
	getline(cin, school, '\n');
	cout << endl;
};

void getStudentmarks(float stumarks)
{
	// mark for English
	cout << "Key in your mark for English:" << endl;
	cin >> English;

	// mark for Mathematics
	cout << "Key in your mark for Mathematics:" << endl;
	cin >> Mathematics;

	// mark for Life Orientation
	cout << "Key in your mark for Life Orientation:" << endl;
	cin >> LifeOrientation;

	// mark for Life History
	cout << "Key in your mark for History:" << endl;
	cin >> History;

	// mark for Life Computer literacy
	cout << "Key in your mark for Computer literacy:" << endl;
	cin >> Computerliteracy;

	// mark for Life Geography
	cout << "Key in your mark for Geography:" << endl;
	cin >> Geography;
	cout << endl;
};

// CODE SYMBOL MARK
// 7 A 80 - 100%
// 6 B 70 - 79%
// 5 C 60 - 69%
// 4 D 50 - 59%
// 3 E 40 - 49%
// 2 F 30 - 39%
// 1 FF 0 - 29%
void calcAverageYearMark()
{
	float totalMarks = (English + Mathematics + LifeOrientation + History + Computerliteracy + Geography);
	average = totalMarks / NumSubjects;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Average Year Mark: " << '\t' << average << " with Symbol ";

	if (average >= 80 && average < 101)
	{
		cout << "A" << " Code 7." << endl;;
	}
	else if (average >= 70 && average < 80)
	{
		cout << "B" << " Code 6." << endl;
	}
	else if (average >= 60 && average < 70)
	{
		cout << "C" << " Code 5." << endl;
	}

	else if (average >= 50 && average < 60)
	{
		cout << "D" << " Code 4." << endl;
	}
	else if (average >= 40 && average < 50)
	{
		cout << "E" << " Code 3." << endl;
	}

	else if (average >= 30 && average < 40)
	{
		cout << "F" << " Code 2." << endl;
	}
	else
	{
		cout << "FF" << " Code 1." << endl;
	}
		
	 
};

void passOrFail()
{
	if (average >= 50)
	{
		cout << "Outcome: " << '\t' << "PASSED" << endl;
	}
	else
		cout << "Outcome" << '\t' << "FAILED" << endl;
	cout << endl;
};


void awardDistinction()
{
	cout << "The following subjects were passed with distinction" << endl;
	if ((English >= 75) && (English < 100))
	cout << "English" << endl;
	if ((Mathematics >= 75) && (Mathematics < 100))
		cout << "Mathematics" << endl;
	if ((LifeOrientation >= 75) && (LifeOrientation < 100))
		cout << "Life Orientation" << endl;
	if ((History >= 75) && (History < 100))
		cout << "History" << endl;
	if ((Computerliteracy >= 75) && (Computerliteracy < 100))
		cout << "Computer Literacy" << endl;
	if ((Geography >= 75) && (Geography < 100))
		cout << "Geography" << endl;
	cout << endl;
};

void minMax()
{
	if ((English >= Mathematics) && (English >= LifeOrientation) && (English >= History) && (English >= Computerliteracy) && (English >= Geography))
		cout << "Highest mark is: " << English;
	if ((Geography >= English) && (Geography >= Mathematics) && (Geography >= LifeOrientation) && (Geography >= History) && (Geography >= Computerliteracy))
		cout << "Highest mark is: " << Geography;
	if ((Mathematics >= English) && (Mathematics >= Geography) && (Mathematics >= LifeOrientation) && (Mathematics >= History) && (Mathematics >= Computerliteracy))
		cout << "Highest mark is: " << Mathematics;
	if ((LifeOrientation >= English) && (LifeOrientation >= Mathematics) && (LifeOrientation >= History) && (LifeOrientation >= Computerliteracy) && (LifeOrientation >= Geography))
		cout << "Highest mark is: " << LifeOrientation;
	if ((History >= English) && (History >= Mathematics) && (History >= LifeOrientation) && (History >= Computerliteracy) && (History >= Geography))
		cout << "Highest mark is: " << History;
	if ((Computerliteracy >= English) && (Computerliteracy >= Mathematics) && (Computerliteracy >= LifeOrientation) && (Computerliteracy >= History) && (Computerliteracy >= Geography))
		cout << "Highest mark is: " << Computerliteracy;
	cout << endl;
};

void minMark()
{
	if ((English <= Mathematics) && (English <= LifeOrientation) && (English <= History) && (English <= Computerliteracy) && (English <= Geography))
		cout << "Lowest mark is: " << English;
	if ((Geography <= English) && (Geography <= Mathematics) && (Geography <= LifeOrientation) && (Geography <= History) && (Geography <= Computerliteracy))
		cout << "Lowest mark is: " << Geography;
	if ((Mathematics <= English) && (Mathematics <= Geography) && (Mathematics <= LifeOrientation) && (Mathematics <= History) && (Mathematics <= Computerliteracy))
		cout << "Lowest mark is: " << Mathematics;
	if ((LifeOrientation <= English) && (LifeOrientation <= Mathematics) && (LifeOrientation <= History) && (LifeOrientation <= Computerliteracy) && (LifeOrientation <= Geography))
		cout << "Lowest mark is: " << LifeOrientation;
	if ((History <= English) && (History <= Mathematics) && (History <= LifeOrientation) && (History <= Computerliteracy) && (History <= Geography))
		cout << "Lowest mark is: " << History;
	if ((Computerliteracy <= English) && (Computerliteracy <= Mathematics) && (Computerliteracy <= LifeOrientation) && (Computerliteracy <= History) && (Computerliteracy <= Geography))
		cout << "Lowest mark is: " << Computerliteracy;
	cout << endl;
};

// CODE SYMBOL MARK
// 7 A 80 - 100%
// 6 B 70 - 79%
// 5 C 60 - 69%
// 4 D 50 - 59%
// 3 E 40 - 49%
// 2 F 30 - 39%
// 1 FF 0 - 29%

void displayReport()
{
	cout << "STUDENT ACADEMIC RECORD" << endl;
	cout << "This program inputs the learner marks of matric";
	cout << "level subjectsand prints the student final report";
	cout << "************************************************* " << endl;

	// Display student personal details and marks per subject
	cout << "First Name(s)" << '\t' << stuname << '\t' << "Surname:" << '\t' << stusurname << '\t' << "School:" << '\t' << school << '\n' << endl;
	setw;
	cout << left;
	cout << setw(20) << "Subject" << setw(6) << "Mark" << setw(9) << "Symbol" << setw(9) << "Code" << endl;

	// Marks per subject
	cout << setw(20) << "English" << setw(6) << English << setw(9) ;
	if (English >= 80 && English < 101)
	{
		cout << "A" << setw(9) << "7" << endl;
	}
	else if (English >= 70 && English < 80)
	{
		cout << "B" << setw(9) << "6" << endl;
	}
	else if (English >= 60 && English < 70)
	{
		cout << "C" << setw(9) << "5" << endl;
	}
	else if (English >= 50 && English < 60)
	{
		cout << "D" << setw(9) << "4" << endl;
	}
	else if (English >= 40 && English < 50)
	{
		cout << "E" << setw(9) << "3" << endl;
	}

	else if (English >= 30 && English < 40)
	{
		cout << "F" << setw(9) << "2" << endl;
	}
	else
	{
		cout << "FF" << setw(9) << "1" << endl;
	}
		 
	cout << setw(20) << "Mathematics" << setw(6) << Mathematics << setw(9);
		if (Mathematics >= 80 && Mathematics < 101)
		{
			cout << "A" << setw(9) << "7" << endl;
		}
		else if (Mathematics >= 70 && Mathematics < 80)
		{
			cout << "B" << setw(9) << "6" << endl;
		}
		else if (Mathematics >= 60 && Mathematics < 70)
		{
			cout << "C" << setw(9) << "5" << endl;
		}
		else if (Mathematics >= 50 && Mathematics < 60)
		{
			cout << "D" << setw(9) << "4" << endl;
		}
		else if (Mathematics >= 40 && Mathematics < 50)
		{
			cout << "E" << setw(9) << "3" << endl;
		}

		else if (Mathematics >= 30 && Mathematics < 40)
		{
			cout << "F" << setw(9) << "2" << endl;
		}
		else
		{
			cout << "FF" << setw(9) << "1" << endl;
		}
			

	cout << setw(20) << "Life Orientation" << setw(6) << LifeOrientation << setw(9);
		if (LifeOrientation >= 80 && LifeOrientation < 101)
		{
			cout << "A" << setw(9) << "7" << endl;
		}
		else if (LifeOrientation >= 70 && LifeOrientation < 80)
		{
			cout << "B" << setw(9) << "6" << endl;
		}
		else if (LifeOrientation >= 60 && LifeOrientation < 70)
		{
			cout << "C" << setw(9) << "5" << endl;
		}
		else if (LifeOrientation >= 50 && LifeOrientation < 60)
		{
			cout << "D" << setw(9) << "4" << endl;
		}
		else if (LifeOrientation >= 40 && LifeOrientation < 50)
		{
			cout << "E" << setw(9) << "3" << endl;
		}

		else if (LifeOrientation >= 30 && LifeOrientation < 40)
		{
			cout << "F" << setw(9) << "2" << endl;
		}
		else
		{
			cout << "FF" << setw(9) << "1" << endl;
		}


	cout << setw(20) << "History" << setw(6) << History << setw(9);

	if (History >= 80 && History < 101)
	{
		cout << "A" << setw(9) << "7" << endl;
	}
	else if (History >= 70 && History < 80)
	{
		cout << "B" << setw(9) << "6" << endl;
	}
	else if (History >= 60 && History < 70)
	{
		cout << "C" << setw(9) << "5" << endl;
	}
	else if (History >= 50 && History < 60)
	{
		cout << "D" << setw(9) << "4" << endl;
	}
	else if (History >= 40 && History < 50)
	{
		cout << "E" << setw(9) << "3" << endl;
	}

	else if (History >= 30 && History < 40)
	{
		cout << "F" << setw(9) << "2" << endl;
	}
	else
	{
		cout << "FF" << setw(9) << "1" << endl;
	}

	cout << setw(20) << "Computer literacy" << setw(6) << Computerliteracy << setw(9);
	if (Computerliteracy >= 80 && Computerliteracy < 101)
	{
		cout << "A" << setw(9) << "7" << endl;
	}
	else if (Computerliteracy >= 70 && Computerliteracy < 80)
	{
		cout << "B" << setw(9) << "6" << endl;
	}
	else if (Computerliteracy >= 60 && Computerliteracy < 70)
	{
		cout << "C" << setw(9) << "5" << endl;
	}
	else if (Computerliteracy >= 50 && Computerliteracy < 60)
	{
		cout << "D" << setw(9) << "4" << endl;
	}
	else if (Computerliteracy >= 40 && Computerliteracy < 50)
	{
		cout << "E" << setw(9) << "3" << endl;
	}

	else if (Computerliteracy >= 30 && Computerliteracy < 40)
	{
		cout << "F" << setw(9) << "2" << endl;
	}
	else
	{
		cout << "FF" << setw(9) << "1" << endl;
	}

	cout << setw(20) << "Geography" << setw(6) << Geography << setw(9);
	if (Geography >= 80 && Geography < 101)
	{
		cout << "A" << setw(9) << "7" << endl;
	}
	else if (Geography >= 70 && Geography < 80)
	{
		cout << "B" << setw(9) << "6" << endl;
	}
	else if (Geography >= 60 && Geography < 70)
	{
		cout << "C" << setw(9) << "5" << endl;
	}
	else if (Geography >= 50 && Geography < 60)
	{
		cout << "D" << setw(9) << "4" << endl;
	}
	else if (Geography >= 40 && Geography < 50)
	{
		cout << "E" << setw(9) << "3" << endl;
	}

	else if (Geography >= 30 && Geography < 40)
	{
		cout << "F" << setw(9) << "2" << endl;
	}
	else
	{
		cout << "FF" << setw(9) << "1" << endl;
	}
	cout << endl;
};

int main()
{

	getStudentDetails();
	getStudentmarks(stumarks);
	displayReport();
	calcAverageYearMark();
	passOrFail();
	awardDistinction();
	minMax();
	minMark();
	return 0;
}