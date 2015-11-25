/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ASN #02    : Card Shuffle
 * CLASS      : CS1C
 * SECTION    : MW: 5:30am
 * DUE DATE   : 08/24/15
 * ***********************************************************************/

#include "Header.h"

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
			    char filler)           // IN & OUT  - Filler character
{
	ostringstream out;
	out << setfill(filler) << setw(LINE_LENGTH) << filler;
	return out.str();
}
