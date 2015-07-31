// vidlen.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "tchar.h"
#include <iostream>


#define SECSPERHOUR 3600
#define SECSPERMIN 60
#define ENDADJUST 7

using namespace std;

int _tmain(int argc, TCHAR* argv[])
{
	if (argc != 4) { cout << "Error: try vidlen hours minutes seconds" << endl << endl;  return 0;  }


	TCHAR* _hours = argv[1];
	TCHAR* _mins = argv[2];
	TCHAR* _secs = argv[3];

	int hours = _ttoi(_hours);
	int mins = _ttoi(_mins);
	int secs = _ttoi(_secs);

	int retval = (SECSPERHOUR*hours) + (SECSPERMIN*mins) + secs - ENDADJUST;
	
	cout << hours << " hours, " << mins <<  "mins, " << secs << " secs." << endl;
	cout << "TOTAL: " << retval << " seconds" << endl;

	return 0;
	
}

