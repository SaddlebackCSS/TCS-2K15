/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ASN #02    : Card Shuffle
 * CLASS      : CS1C
 * SECTION    : MW: 5:30am
 * DUE DATE   : 08/24/15
 * ***********************************************************************/

#include "Header.h"

/**************************************************************************
 * FUNCTION DisplayMenu
 *_________________________________________________________________________
 *	This function displays the MENU OPTIONS
 *	for the program using ostringstream
 *
 *	RETURNS Menu as a string
 *_________________________________________________________________________
 *************************************************************************/
string DisplayMenu()
{
	ostringstream output;

	output << left;
	output << "Actions\n"
		   << FillLine(20, '-') << endl
		   << "1 - Check turkey\n"
		   << "2 - Chat with family\n"
		   << "3 - Eat snacks\n"
		   << "4 - Grab a drink\n"
		   << "5 - Take turkey out\n"
           << "0 - QUIT\n"
		   << "Enter a command: ";

	return output.str();
}
