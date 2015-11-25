/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ***********************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <limits>
#include <time.h>
#include <ios>

using namespace std;

enum Menu
{
	EXIT,
	Option1,
	Option2,
	Option3,
	Option4,
	Option5
};

/**************************************************************************
 * FUNCTION DisplayMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayMenu();

/**************************************************************************
 * FUNCTION GetAndCheckInp
 *_________________________________________________________________________
 *	This function receives the desired integer input variable to return to,
 *	the prompt to ask the user for input, and the boundaries in order to
 *	error check both for an invalid character input and invalid range.
 *
 *	REQUIRED FUNCTIONS: IntToString, BoundsToString
 *
 *	RETURNS valid integer input
 *_________________________________________________________________________
 *************************************************************************/
int GetAndCheckInp(int input,              // IN & OUT   - Desired int variable
		             const string PROMPT,  // OUT        - User input Prompt
		             const int LOW_BOUND,  // PROC & OUT - Lower boundary
		             const int HIGH_BOUND);// IN & PROC  - Input to be validated

/**************************************************************************
 * FUNCTION BoundsToString
 *_________________________________________________________________________
 *	This function receives integer boundary values and converts the
 *	whole error message into a string, ready to easily be formatted
 *	as desired.
 *
 *	RETURNS message as string
 *_________________________________________________________________________
 *************************************************************************/
string BoundsToString(const int LOW_BOUND,   // IN & OUT - Low boundary
		              const int HIGH_BOUND); // IN & OUT - High boundary

/**************************************************************************
 * FUNCTION IntToString
 *_________________________________________________________________________
 *	This function gets an integer input and converts it to a string
 *
 *	RETURNS integer as a string
 *_________________________________________________________________________
 *************************************************************************/
string IntToString(const int NUMBER); // IN & OUT - Integer to be converted

/**************************************************************************
 * FUNCTION FillLine
 *_________________________________________________________________________
 *	This function receives line length and the filler.
 *	It will then simply fill the line with the desired filler.
 *
 *	RETURNS line filler as string
 *_________________________________________________________________________
 *************************************************************************/
string FillLine(const int LINE_LENGTH, // IN & PROC - Desired line length
			    char filler);          // IN & OUT  - Filler character

#endif /* HEADER_H_ */
