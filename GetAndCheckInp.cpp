/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ASN #02    : Card Shuffle
 * CLASS      : CS1C
 * SECTION    : MW: 5:30am
 * DUE DATE   : 08/24/15
 * ***********************************************************************/

#include "Header.h"

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
int GetAndCheckInp(int input,             // IN & OUT   - Desired int variable
		             const string PROMPT, // OUT        - User input Prompt
		             const int LOW_BOUND, // PROC & OUT - Lower boundary
		             const int HIGH_BOUND)// IN & PROC  - Input to be validated
{
	bool invalid;
	string inputString;
	int size;
	size = 0;

	cout << left;
	cout << PROMPT;
	do
	{
		invalid = false;

		// Checks for an invalid char
		if(!(cin >> input))
		{
			cout << "\n**** Please enter a NUMBER "
				 <<	"between " << LOW_BOUND
				 << " and "   << HIGH_BOUND << " ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits <streamsize> :: max(), '\n');
			cout << PROMPT;
			invalid = true;
		}

		//Checks within range
		if((input < LOW_BOUND || input > HIGH_BOUND) && !(invalid))
		{
			inputString = IntToString(input);
			inputString =  "\n**** The number "
					        + inputString
					        + " is an invalid entry ";

			// Sets proper set width size according to input
			if(inputString.length() <
			   BoundsToString(LOW_BOUND, HIGH_BOUND).length())
			{
				size = (BoundsToString(LOW_BOUND, HIGH_BOUND).length()
						- inputString.length())
						+ inputString.length();
			}
			else
			{
				size = inputString.length();
			}

			cout << setw(size) << inputString << " ****";
			cout << setw(size) << BoundsToString(LOW_BOUND, HIGH_BOUND)
				 << " ****" << endl << endl;
			cin.clear();
			cin.ignore(numeric_limits <streamsize> :: max(), '\n');
			cout << PROMPT;
			invalid = true;

		}
	}while(invalid);
	cin.ignore(numeric_limits <streamsize> :: max(), '\n');
	cout << right;

	return input;
}
